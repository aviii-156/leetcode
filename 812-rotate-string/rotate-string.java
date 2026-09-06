class Solution {
    public boolean rotateString(String s, String goal) {
        for(int i =0;i<goal.length();i++){
            char[] arr =new char[s.length()];
            if(s.charAt(0)==goal.charAt(i)){
                for(int j =0;j<s.length();j++){
                    arr[j]=goal.charAt((i+j)%goal.length());
                }
            }
             String ans = new String(arr);
            if(s.equals(ans)){
                return true;
            }
        }
        return false;
        
        
    }
}