class Solution {
public:
    int search(vector<int>& nums, int target) {
        int end =nums.size()-1;
        int start =0;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target ){
                return mid;
            }
             //left half sorted ho ager 
            if(nums[start]<=nums[mid]){
                if(nums[start]<=target && nums[mid]>target ){
                 end =mid-1;


                }else{
                     start=mid+1;
                }
            }else{ //ager right half sorted ho 
                if(nums[mid]<target && nums[end]>=target){
                    start =mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
        
    }
};