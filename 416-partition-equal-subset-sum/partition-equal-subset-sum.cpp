class Solution {
public:

vector<vector<int>>dp;
   bool  solve(vector<int>&nums,int x,int i ){
    if(x==0) return true;
    
    if(i>=nums.size()) return false;
    if(dp[i][x]!=-1){
        return dp[i][x];
    }
    bool take =false;
    if(nums[i]<=x){
        take =solve(nums,x-nums[i],i+1);
        }
        bool skip =solve(nums,x,i+1);
         return dp[i][x]= take||skip;
   }
  
    bool canPartition(vector<int>& nums) {
       int  sum =0;
       
        for(int i =0;i<nums.size();i++){
            sum +=nums[i];

            
        }
        if(sum%2!=0){
            return false;
        }
        int x=sum/2;
        dp.resize(nums.size(),vector<int>(x+1,-1));
        return solve(nums,x,0);
        
    }
};