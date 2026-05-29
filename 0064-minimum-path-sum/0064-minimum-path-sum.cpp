class Solution {
public:
    int m ;
    int n ;
    vector<vector<int>>dp;

    int solve(vector<vector<int>>& grid, int x, int y) {
         if (x >= m || y >= n)
            return INT_MAX; // base case

        if (x == m - 1 && y == n - 1)
            return grid[x][y]; 
       
        if (dp[x][y] != -1)
            return dp[x][y];
        int down = solve(grid, x + 1, y);
        int right = solve(grid, x, y + 1);
        return dp[x][y] = grid[x][y] + min(down, right);
    }
    int minPathSum(vector<vector<int>>& grid) { 
         m = grid.size();
         n =grid[0].size();
        dp = vector<vector<int>>(m,vector<int>(n,-1));//dp ki size intialize kro 
        return solve(grid, 0, 0);
        }
};