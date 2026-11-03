class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int move =0;
        int maxx=nums[n-1];
        for(int i =0;i<n;i++){
            move+=abs(nums[i]-maxx);
        }
        return move;
    }
};