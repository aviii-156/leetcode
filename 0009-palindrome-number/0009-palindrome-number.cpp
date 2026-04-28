class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;//negative hua to flase 
        int  orignal =x;
        int rev=0;
        while(x!=0){
            int digit =x%10;//last degite find krega
            if (rev > INT_MAX / 10) return false;
            rev =rev*10+digit;// usko reverse krega
            x=x/10;
        }
        return orignal ==rev;
        
    }
};