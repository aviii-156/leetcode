class Solution {
    public int firstStableIndex(int[] nums, int k) {
        for(int i =0;i<nums.length;i++){
            int maxi=Integer.MIN_VALUE;
            int mini=Integer.MAX_VALUE;
            for(int j =0;j<=i;j++){
                maxi=Math.max(maxi, nums[j]);

            }
            for(int j =i;j< nums.length;j++){
                mini =Math.min(mini,nums[j]);
            }
            if(maxi -mini <=k){
                return i;
            }
        }
        return -1;
        
    }
}