class Solution {
public:
    int n;
    int dfs( int i,vector<int>&nums, int target ,vector<int>&t ){
            if(i==n-1) {
                return t[i]=0;
            }//reached last index 

            if(t[i]!=INT_MIN){
                return t[i];
            }
            
            int maxans=INT_MIN;
            for(int j =i+1;j<n;j++){
                if(abs(nums[j] - nums[i]) <= target){
                   int  temp= dfs(j,nums,target,t );
                  
                    maxans=max(maxans,1+temp);//recuression all possible jumps and get maximum 
                   
                   
                }
            }
            return t[i]=maxans;
        
        }

    int maximumJumps(vector<int>& nums, int target) {
        n =nums.size();
        vector<int>t(n+1,INT_MIN);
        int result= dfs(0,nums,target,t);
        return result<0 ? -1:result;
       
        
        
        
    }
};