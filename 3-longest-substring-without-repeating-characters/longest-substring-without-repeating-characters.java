class Solution {
    public int lengthOfLongestSubstring(String s) {
         int maxlen =0;
        
        for(int i =0;i<s.length();i++){
             HashSet<Character>set=new HashSet<>();
             for(int j = i ;j<s.length();j++){
                if(set.contains(s.charAt(j))){
                    break;
                }
                set.add(s.charAt(j));
                int len = j-i+1;
                maxlen=Math.max(len , maxlen);
             }
           
        }
        return maxlen;
        
    }
}