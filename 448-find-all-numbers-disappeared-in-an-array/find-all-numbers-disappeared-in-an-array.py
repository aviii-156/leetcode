class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        s=set()
        arr=[]
        for x in nums:
            if x not in s:
                s.add(x)
        
        for i in range(1,len(nums)+1):
            if i not in s:
                arr.append(i)
        
        return arr