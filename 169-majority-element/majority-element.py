class Solution:
    def majorityElement(self, nums):
        freq = {}

        for num in nums:
            freq[num] = freq.get(num, 0) + 1

        for num in freq:
            if freq[num] > len(nums) // 2:
                return num
