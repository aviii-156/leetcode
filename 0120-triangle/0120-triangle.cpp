class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //bottom to up approch dp 2d 
        int n =triangle.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int row =n-1;row>=0;row--){
            for(int col =0;col<=row;col++){
                dp[row][col ]= triangle[row][col]+min(dp[row+1][col+1],dp[row+1][col]);
            }
        }
        return dp[0][0];
        
    }
};