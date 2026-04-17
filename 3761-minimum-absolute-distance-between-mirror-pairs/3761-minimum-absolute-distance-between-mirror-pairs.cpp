class Solution {
public:
   int reversenum(int x){
    int rev =0;
    while(x>0){
        int digit =x%10;
        rev =rev*10+digit;
        x=x/10;

    }
    return rev;
   }
    int minMirrorPairDistance(vector<int>& nums) {
        int  n =nums.size();
        unordered_map<int,int>mp;
        int ans=INT_MAX;
        for(int i =0;i<n;i++){
           
            if(mp.count(nums[i])){ // check the  number is avilale in the map or not 
                ans=min(ans,(i-mp[nums[i]]));//if yes then find the minimum
            }
             int rev = reversenum(nums[i]);//
            mp[rev]=i;//if not present number in the map then reverse it and stor in map
        }
        return ans==INT_MAX ? -1:ans;
        
    }
};