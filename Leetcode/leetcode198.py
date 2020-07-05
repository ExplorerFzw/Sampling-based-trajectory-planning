nums = [1,2,3,1]
pre = 0
cur = 0
for i in nums:
    pre, cur = cur, max(cur, pre + i)

print(cur)
for i in range(3,10):
    print(i)