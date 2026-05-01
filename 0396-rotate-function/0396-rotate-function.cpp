class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n =nums.size();
        long long f=0,sum=0;
        for(int i =0;i<n;i++){
            sum += nums[i];
            f+= (long long )i*nums[i]; //first f(k)
        }
        long long ans =f;
        for(int j =1;j<n ;j++){
            f=f+sum-(long long)n*nums[n-j]; //formula for next f(k)
            ans =max(ans,f);

        }
        return ans;
        
    }
};