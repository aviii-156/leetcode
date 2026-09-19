class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        arr=[]
        for i in range(len(nums)):
            arr.append(nums[i]*nums[i])
        arr.sort()
        return arr
            
        