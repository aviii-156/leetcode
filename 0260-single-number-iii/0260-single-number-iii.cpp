class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> Ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i = 0; i < n - 1; i += 2){
            if(nums[i] != nums[i+1]){
                Ans.push_back(nums[i]);
                i--; 
            }
        }

        
        if(Ans.size() == 1 || nums[n-1] != nums[n-2]){
            Ans.push_back(nums[n-1]);
        }

        return Ans;
    }
};