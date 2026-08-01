class Solution {
public:
    int solve(int i, int j, vector<int>& nums, vector<vector<int>>& dp) {
        // Base Case
        if (i == j)
            return nums[i];

        if (dp[i][j] != INT_MIN)
            return dp[i][j];

        // Pick left
        int left = nums[i] - solve(i + 1, j, nums, dp);

        // Pick right
        int right = nums[j] - solve(i, j - 1, nums, dp);

        return dp[i][j] = max(left, right);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> dp(n, vector<int>(n, INT_MIN));

        return solve(0, n - 1, nums, dp) >= 0;
    }
};