class Solution {
public:
int INF =1e9;
vector<vector<int>>dp;
int solve(int i , int amount,vector<int>&coins){
    if(amount ==0) return 0;//base case
  
    if(i==coins.size()) return INF;
      if(dp[i][amount]!=-1) return dp[i][amount];
    int not_take=solve( i+1 ,amount,coins);
    int take =INF;
    if(coins[i]<=amount){
        take =1+solve(i,amount-coins[i],coins);
    }
    return dp[i][amount]= min(take,not_take);
}
    int coinChange(vector<int>& coins, int amount) {
        dp.resize(coins.size(),vector<int>(amount+1,-1));
      
      int ans =solve(0,amount,coins);
       return ans ==INF ? -1: ans;
        
    }
};