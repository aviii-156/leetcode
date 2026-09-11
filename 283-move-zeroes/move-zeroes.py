class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        n =len(nums)
        arr=[0]*n
        count=0
        for i in range(n):
            if nums[i]!=0:
                arr[count]=nums[i]
                count=count+1

        for i in range(n):
            nums[i]=arr[i]


        """
        Do not return anything, modify nums in-place instead.
        """
        