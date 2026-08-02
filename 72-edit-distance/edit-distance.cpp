class Solution {
public:
int m ,n;
int t[501][501];
int solve(string word1, string word2 ,int i ,int j ){
    if(i==m) return n-j;
    if(j==n) return m-i;
    if(t[i][j]!=-1) return t[i][j];
    if(word1[i]==word2[j]) {
        return solve(word1,word2,i+1,j+1);
    }
    int insert=1+solve(word1,word2,i,j+1);
    int delet =1+solve(word1,word2,i+1,j);
    int replace=1+solve(word1,word2,i+1,j+1);
    return t[i][j]=min({insert,delet ,replace });
    

}
    int minDistance(string word1, string word2) {
        memset(t,-1,sizeof(t));
         m =word1.size();
         n =word2.size();
        return solve(word1,word2,0,0);
        
    }
};