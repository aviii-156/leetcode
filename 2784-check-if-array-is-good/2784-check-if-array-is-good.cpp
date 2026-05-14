class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0;i<n-1;i++){
            if(nums[i]!=i+1){//last -1 tk loop chlega 
                return false;
            }
        }
        return nums[n-1]==n-1;
        //last element check krenge same h
    }
};