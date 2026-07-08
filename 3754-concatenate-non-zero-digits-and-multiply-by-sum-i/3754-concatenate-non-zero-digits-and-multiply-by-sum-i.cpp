class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        vector<int>digits;
        int sum =0;
         while( n>0){
         int digit = n%10;
         if(digit!=0){
            sum+=digit;
         digits.push_back(digit);
         }
         n=n/10;


         }
        
        reverse(digits.begin(),digits.end());
         long long  ans=0;
         for(int i =0;i<digits.size();i++){
            ans =ans*10+digits[i];
         }
        long long  result = ans * sum ;
        return result;
    }
};