class Solution {
    public int singleNumber(int[] nums) {
           HashMap<Integer,Integer>mp=new HashMap<>();
           for(int i =0;i<nums.length;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
           }
           int ans=0;
           for(int x:mp.keySet()){
            if(mp.get (x)==1){
                ans = x;
                
            }
           }
           return ans;
        
    }
}