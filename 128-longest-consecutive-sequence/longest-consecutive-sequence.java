class Solution {
    public int longestConsecutive(int[] nums) {
        Arrays.sort(nums);
        int count=0;
        int ans =0;
        if(nums.length==0) return 0;
        for(int i =0;i<nums.length-1;i++){
            
            
            if(nums[i]+1==nums[i+1]){
                count++;
                ans =Math.max(count,ans);
            }else if(nums[i]==nums[i+1]){
                continue;
            }else{
                count =0;
            }
        }
        return ans+1;
        
    }
}