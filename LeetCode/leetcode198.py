class Solution:
    def rob(self, nums: List[int]) -> int:
        if nums == []:
            return 0

        pre = 0
        cur = 0

        for i in nums:
            pre, cur = cur, max(cur, pre + i)
        return cur