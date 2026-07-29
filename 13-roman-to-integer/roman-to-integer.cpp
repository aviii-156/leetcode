class Solution {
public:
    int value(char a) {
        if ( a== 'I') return 1;
        if ( a== 'V') return 5;
        if ( a== 'X') return 10;
        if ( a== 'L') return 50;
        if ( a== 'C') return 100;
        if ( a== 'D') return 500;
        return 1000;
        
    }
    int romanToInt(string s) {
        int ans=0;
        for(int i = 0;i<s.length();i++){
            if(i+1<s.size()&& value(s[i])<value(s[i+1])){
                ans-=value(s[i]);
            }else{
                ans+=value(s[i]);
            }
        }
        return ans;
        
    }
};