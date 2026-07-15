class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evenSum = n*n;
        int oddSum =n*(n+1);
        int result =gcd(evenSum , oddSum);
        return result;
        
    }
};