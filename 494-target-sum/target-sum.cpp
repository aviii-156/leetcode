class Solution {
public:
vector<vector<int>>dp;
int solve(int i ,int currentSum,vector<int>&nums ,int target ){
    if(i==nums.size()){
        if(currentSum == target ){
            return 1;
        }else{
            return 0;
        }
    }
    if(dp[i][currentSum+1000]!=-1) return dp[i][currentSum+1000];//current sum can be negative make it positive everywhere 

    int pluse=solve(i+1,currentSum +nums[i],nums,target );
    int minus =solve(i+1 ,currentSum-nums[i],nums,target );
    return dp[i][currentSum+1000]=pluse+minus;// sum of all posiblity 
}
    int findTargetSumWays(vector<int>& nums, int target) {
        dp.resize(nums.size()+1,vector<int>(2001,-1));//size insitalize
        return solve(0,0,nums,target);
        
        
    }
};