class Solution:
    def containsNearbyDuplicate(self, nums: list[int], k: int) -> bool:
        freq={}
        for i in range(len(nums)):
            if nums[i] not in freq:
                freq[nums[i]]=+1
            else:
               if abs(freq[nums[i]]-i)<=k:
                return True
            freq[nums[i]] = i
        
        return False
        