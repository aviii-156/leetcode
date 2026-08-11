class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        int sum =nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
                
            }else{
                
               break;
            }
        }
        unordered_set<int>set;
        for(int i =0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        while(set.count(sum)){
            sum++;
        }
        return sum;
        
    }
};