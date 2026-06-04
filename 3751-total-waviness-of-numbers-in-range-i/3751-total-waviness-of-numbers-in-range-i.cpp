class Solution {
public:
    int solve (int x){
        string n= to_string(x);
        if(n.size()<3) return false;
        int count=0;
        for(int i =1;i<n.size()-1;i++){
            bool peak=(n[i]>n[i+1] && n[i-1]<n[i]);
            bool velly=(n[i]<n[i-1] && n[i+1]>n[i]);
            if(peak || velly) count++;
        }
        return count;

    }
    int total =0;
    int totalWaviness(int num1, int num2) {
        for(int i =num1;i<=num2;i++){
           total+=(solve(i));
        }
        return total;

        
    }
};