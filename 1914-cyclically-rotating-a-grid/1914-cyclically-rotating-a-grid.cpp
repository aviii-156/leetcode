class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n =grid[0].size();
        int layers =min(m,n)/2;
        vector<int>nums;
        for(int layer =0;layer <layers;layer++){
            vector<int>nums;
            int top = layer; // uper gride travers
            int bottom =m-layer-1; //bottom gride travers 
            int left =layer;//left side gride traverse 
            int right =n-layer-1; // right side gride traverse
            for(int i = left ;i<= right;i++) {
                nums.push_back(grid[top][i]); ///left to right 

            }
            for(int j =top+1;j<=bottom-1;j++){
                nums.push_back(grid[j][right]);//top to bottom 
            }
            for(int j =right;j>=left;j--){
                nums.push_back(grid[bottom][j]);//right to left 
            }
            for(int i=bottom-1;i>=top+1;i--){
                nums.push_back(grid[i][left]);//bottom to top 
            }
                int len =nums.size();
                int x=k%len;
                rotate(begin(nums),begin(nums)+x,end(nums));
                int idx=0;

            for(int i = left ;i<= right;i++) {
                grid[top][i]=nums[idx++]; ///left to right 

            }
            for(int j =top+1;j<=bottom-1;j++){
                grid[j][right]=nums[idx++];//top to bottom 
            }
            for(int j =right;j>=left;j--){
                grid[bottom][j]=nums[idx++];//right to left 
            }
            for(int i=bottom-1;i>=top+1;i--){
                grid[i][left]=nums[idx++];//bottom to top 
            }

                
        }
        return grid;
        // time complexit O(m+n)-> traverse every  gride element 

        
    }
};