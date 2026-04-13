class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]].push_back(i);

        }
        int ans=INT_MAX;
        for(auto &it :mp){
            vector<int>&index=it.second;
            if(index.size()<3) continue;
            for(int i =0;i<=index.size()-3;i++){//check each elements of index
                int k =i+2;//k is last element of index and i is 2th before of k 
                ans =min(ans,2*(index[k]-index[i]));//formula to hget the ans 2*(k-i)
            }

        }
        return ans==INT_MAX ? -1: ans;
        
    }
};