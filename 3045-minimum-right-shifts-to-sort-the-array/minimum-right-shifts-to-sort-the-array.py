class Solution:
    def minimumRightShifts(self, nums: List[int]) -> int:
        index=0
        ans=0
        count=0
        for i in range(len(nums)-1):
            if nums[i]>nums[i+1]:
                count=count+1
                index=i

        
        if count==1 and nums[0]>nums[-1]:
           return  len(nums)-index-1
        if count ==0:
            return 0
        return -1

        
        