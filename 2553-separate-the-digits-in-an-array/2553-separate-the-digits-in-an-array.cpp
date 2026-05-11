class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n =nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++ ){
            vector<int>temp;
            
            
            while(nums[i]!=0){
                int digit= nums[i]%10;
                nums[i]=nums[i]/10;
                temp.push_back(digit);

                
                
            }
            reverse(temp.begin(),temp.end());
            for(int x :temp){
                ans.push_back(x);
            }
            
        }
        return ans;
        
    }
};