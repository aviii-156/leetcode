class Solution {
    public boolean isAnagram(String s, String t) {
        char[] arr=s.toCharArray();
        char[] arr2=t.toCharArray();
        Arrays.sort(arr);
        Arrays.sort(arr2);
        s=new String(arr);
        t=new String(arr2);
        return s.equals(t);
        
    }
}