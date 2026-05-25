class Solution {
public:
    int n;
    int dp[105];
    int solve(int x, vector<int>& nums, int end) { //take or skip recusresion 
        if (x > end)
            return 0;
        if (dp[x] != -1)
            return dp[x];
        int take = nums[x] + solve(x + 2, nums, end);
        int skip = solve(x + 1, nums, end);
        return dp[x] = max(take, skip);
    }
    int rob(vector<int>& nums) {
        n = nums.size();
        if (n == 1) //edge cases
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);
        memset(dp, -1, sizeof(dp));
        int if_taken = solve(0, nums, n - 2); //if you take the even path 
        memset(dp, -1, sizeof(dp));
        int if_skiped = solve(1, nums, n - 1);//if you taken odd path 
        memset(dp, -1, sizeof(dp));
        return max(if_taken, if_skiped);
    }
};