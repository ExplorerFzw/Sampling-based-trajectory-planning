from selenium import webdriver
from time import sleep
import re
import os


# 搜索商品
def search_products():
    # 输入商品名字
    driver.find_element_by_xpath('//*[@id="key"]').send_keys(keyword)
    # 点击搜索
    driver.find_element_by_xpath('//*[@class="form"]/button').click()
    sleep(10)
    token = driver.find_element_by_xpath('//*[@id="J_bottomPage"]/span[2]/em[1]/b').text
    # 0代表所有匹配到的数字
    token = int(re.compile('(\d+)').search(token).group(1))
    # 返回总页数
    return token


# 下拉下滑条，加载数据
def drop_down():
    for x in range(1, 11, 2):
        sleep(1)
        j = x / 10
        js = 'document.documentElement.scrollTop = document.documentElement.scrollHeight * %f' % j
        driver.execute_script(js)


# 获取商品信息
def get_product():
    lis = driver.find_elements_by_xpath('//*[@class="gl-warp clearfix"]/li[@class="gl-item"]')
    for li in lis:
        price = li.find_element_by_xpath('.//div[@class="p-price"]/strong/i').text + '元'
        info = li.find_element_by_xpath('.//div[@class="p-name"]/a/em').text + li.find_element_by_xpath(
            './/div[@class="p-name"]/a').get_attribute('title')
        p_commit = li.find_element_by_xpath('.//div[@class="p-commit"]/strong/a').text
        p_shopnum = li.find_element_by_xpath('.//div[@class="p-shopnum"]/*').text
        p_img = li.find_element_by_xpath('.//div[@class="p-img"]/a/img').get_attribute('src')
        print(info, price, p_commit, p_shopnum, p_img, sep='|')


# 翻页
def next_page():
    token = search_products()
    num = 1
    while (num != token):
        driver.get('https://search.jd.com/Search?keyword={}&page={}'.format(keyword, 2 * num - 1))
        driver.implicitly_wait(10)
        num += 1
        drop_down()
        get_product()


if __name__ == "__main__":
    keyword = input('输入你想查找的商品名字:')
    driver_path = os.path.abspath(os.path.join(os.getcwd(), "..")) + "/Drive/chromedriver.exe"
    driver = webdriver.Chrome(driver_path)
    # 窗口最大化，防止数据丢失
    driver.maximize_window()
    driver.get('https://www.jd.com/')
