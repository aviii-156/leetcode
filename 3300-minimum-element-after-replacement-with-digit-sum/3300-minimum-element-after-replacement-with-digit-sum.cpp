class Solution {
public:
  int digitSum(int x){
    int ans=0;
    while(x>0){
        int digit = x%10;
         ans=ans+digit;
        x=x/10;

    }
    return ans;
  }
    int minElement(vector<int>& nums) {
        
        int solve =INT_MAX;
        for(int i =0;i<nums.size();i++){
            int y = digitSum(nums[i]);
            
            solve = min(solve ,y);
            
        }
        return solve;
        
    }
};