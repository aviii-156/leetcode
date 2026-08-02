class Solution {
public:
int t[501][501];
int solve(vector<int>&piles ,int i ,int j ){
    if(i>j) return 0;
    if(t[i][j]!=-1) return t[i][j];

    int takeith=piles[i]+min(solve(piles,i+1,j-1),solve(piles,i+2,j));
    int takejth =piles[j]+min(solve(piles,i+1,j-1),solve(piles,i,j-2));
    return t[i][j]=max(takeith,takejth);

}
    bool stoneGame(vector<int>& piles) {
        memset(t,-1,sizeof(t));
    
        int j =piles.size()-1;
        int total=0;
        for(int i =0;i<=j;i++){
            total+=piles[i];
        }
        int alisScore= solve(piles,0,j);
        int bobScore =total -alisScore;
        return alisScore>bobScore;
        
    }
};