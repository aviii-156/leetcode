class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        arr=[]
        left=0
        right=len(numbers)-1
        while left<right:
            mid=(numbers[left]+numbers[right])
            if mid==target:
                return [left+1,right+1]
            elif mid<target:
                left+=1
            else:
                right-=1
        return []
        

        