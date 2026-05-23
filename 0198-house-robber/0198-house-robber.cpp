class Solution {
public:
    int n;
    int dp[105];
    int solve(int idx, vector<int>& nums) {
        if (idx >= n)
            return 0;

        if (dp[idx] != -1) {
            return dp[idx];
        }

        int take = nums[idx] + solve(idx + 2, nums); // if taken
        int skip = solve(idx + 1, nums);             // if skip
        return dp[idx] = max(take, skip);
    }
    int rob(vector<int>& nums) {

        n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(0, nums);
    }
};