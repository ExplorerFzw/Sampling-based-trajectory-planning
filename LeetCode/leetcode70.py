class Solution:
    def climbStairs(self, n: int) -> int:
        pre = 1
        cur = 2

        if n == 1:
            return 1
        if n == 2:
            return 2

        for i in range(3, n + 1):
            pre, cur = cur, pre + cur
        return cur