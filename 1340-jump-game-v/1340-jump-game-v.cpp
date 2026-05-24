class Solution {
public:
int f(int index ,vector<int>&arr,int d ,vector<int>&dp ){
    int max_place =1;
    if(dp[index]!=-1) return dp[index];//
    //left side 
    for(int i =index-1;i>=max(0,index-d);i--){
        if(arr[i]>=arr[index]) break;
        max_place =max(max_place,1+f(i,arr,d,dp));
    }
    //right side 
    for(int i =index+1;i<=min((int)arr.size()-1,index+d);i++){
        if(arr[i]>=arr[index])break;
        max_place =max(max_place ,1+f(i,arr,d,dp));
    }
    return dp[index]=max_place;

}
    int maxJumps(vector<int>& arr, int d) {
        int n =arr.size();
        int ans =1;
        vector<int>dp(n,-1);
        for(int i =0;i<n;i++){
            ans=max(ans ,f(i,arr,d,dp));//function call will give the maximum of all the index 
        }
        return ans ;
        
    }
};