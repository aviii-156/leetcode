class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size();
        int m =boxGrid[0].size();
        vector<vector<char>>Rotated(m,vector<char>(n));
        //step 1 applyy kro gravity
        for(int i =0;i<n ;i++){
            int empty =m-1;
            for(int j =m-1;j>=0;j--){
                if(boxGrid[i][j]=='*'){
                    empty=j-1; //if found obstacle then just move just above it 
                }
                else if(boxGrid[i][j]=='#'){
                    swap(boxGrid[i][j],boxGrid[i][empty]);
                    empty--;
                }


            }
        } 
        //rotate kro 90 degrre
        for(int i =0;i<n;i++){
            for(int j =0;j<m ;j++){
                Rotated[j][n-1-i]=boxGrid[i][j];

            }
        }
        return Rotated;
        
    }
};