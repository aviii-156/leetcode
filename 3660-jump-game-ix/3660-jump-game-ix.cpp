class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n =nums.size();
        vector<int>preMax(n,0);//prefix Max
        vector<int>sufMin(n,0);//suffix Min
        preMax[0]=nums[0];
         for(int i =1;i<n ;i++){
            preMax[i]=max(preMax[i-1],nums[i]);
            
         }
         sufMin[n-1]=nums[n-1];
         for(int i=n-2;i>=0;i--){
            sufMin[i]=min(sufMin[i+1],nums[i]);
         }
         vector<int>ans(n,0);
         ans[n-1]=preMax[n-1];
         for(int i =n-2;i>=0;i--){
            if(preMax[i]>sufMin[i+1]){//compare prefixMax > SuffixMin then the ans will be next to it 
                ans[i]=ans[i+1];
            }else{
                ans[i]=preMax[i]; //other waise ans is prefixMax
            }

         }
         return ans;
    }
};