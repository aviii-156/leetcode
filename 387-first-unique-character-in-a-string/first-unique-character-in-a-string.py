class Solution:
    def firstUniqChar(self, s: str) -> int:
        sets={}
        for x in s:
            if x in sets:
                sets[x]+=1
            else:
                sets[x]=1
        for i in range(len(s)):
            if sets[s[i]]==1:
                return i
        return -1

        