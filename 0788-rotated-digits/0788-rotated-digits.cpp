class Solution {
public:
    int rotatedDigits(int n) {
        int counter=0;
        map<int,int>mp={
           {2,5},{5,2},{6,9},{9,6}//the  rotated number exist
        };
        int i =1;
        
        while(i<=n){
            bool valid =true;
            int rev=0;
            int temp=i;
            bool changed= false;
           while(temp > 0) {
                int d = temp % 10;
                if(d == 3 || d == 4 || d == 7) {
                    valid = false;//this number exist then return false
                    break;
                }
                if(d == 2 || d == 5 || d == 6 || d == 9) {
                    changed = true;
                }
                temp /= 10;
            }
            if(changed==true && valid==true){//if  it  is not same and valid
                counter++;
            }
            i++;
            
        }
        return counter;
        
    }
};