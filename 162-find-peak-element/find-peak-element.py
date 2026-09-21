class Solution:
    def findPeakElement(self, nums: list[int]) -> int:
        temp=0
        
        for i in range(1,len(nums)):
            if nums[i]>nums[temp]:
                temp=i
        return temp
                
        