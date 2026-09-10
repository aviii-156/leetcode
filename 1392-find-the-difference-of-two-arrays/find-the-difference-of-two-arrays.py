class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        ans1=[]
        ans2=[]
        for i in range(len(nums1)):
            found =False
            for j in range(len(nums2)):
                if nums1[i]==nums2[j]:
                    found =True
                    break
            if found==False and nums1[i] not in ans1:
                ans1.append(nums1[i])

        for i in range(len(nums2)):
            found =False
            for j in range(len(nums1)):
                if nums2[i]==nums1[j]:
                    found =True
                    break
            if found==False and nums2[i] not in ans2:
                ans2.append(nums2[i])

        return [ans1 ,ans2]