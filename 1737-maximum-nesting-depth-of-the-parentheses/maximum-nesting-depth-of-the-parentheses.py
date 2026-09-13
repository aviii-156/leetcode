class Solution:
    def maxDepth(self, s: str) -> int:
        count = 0
        maxcount = 0

        for ch in s:
            if ch == "(":
                count += 1
                maxcount = max(maxcount, count)

            elif ch == ")":
                count -= 1

        return maxcount