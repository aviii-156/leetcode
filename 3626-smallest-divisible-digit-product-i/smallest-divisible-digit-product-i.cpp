class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp =0;
        
        while(true){
           temp=n;
           long long digit =   1;
            while(temp>0){
                digit=digit*(temp%10);
                temp=temp/10;
                
            }
            if(digit%t==0&&n>=t){
                return n;
                
            }else{
            n++;
            }
        }
        
        
    }
};