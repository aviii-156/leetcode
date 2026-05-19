class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        int ans =INT_MAX;
        for(int i =0;i<nums1.size();i++){
            mp[nums1[i]++];
        }
        for(int j =0;j<nums2.size();j++){
            if(mp.find(nums2[j]) != mp.end()){
                ans=min(ans,nums2[j]);

            }
        }
        return ans ==   INT_MAX ?-1:ans;

        
    }
};