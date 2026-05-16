class Solution {
public:
    int findMin(vector<int>& nums) {
        int i =0;
        int n =nums.size()-1;
        while(i<n){
           int mid = i+(n-i)/2;
            if(nums[mid]>nums[n]){

                i=mid+1; //if mid greater

            }else if(nums[mid]<nums[n]) {
                n=mid;//if mid lower 
            }else{
                n--; //if duplicate present 
            }
        }
        return nums[i] ;
        
    }
};