class Solution:
    def findDuplicates(self, nums: list[int]) -> list[int]:
        temp=1
        nums.sort()
        arr=[]
        for i in range(len(nums)):
            if i >0 and nums[i]==nums[i-1]:
                arr.append(nums[i])
        return arr

        