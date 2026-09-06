class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int left =0;
         int ans =0;
         unordered_set<char>set;
         for(int i =0;i<s.size();i++){
            while(set.count(s[i])){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[i]);
            int len = i-left+1;
            ans =max(ans,len);
            
             }
             return ans;
        
    }
};