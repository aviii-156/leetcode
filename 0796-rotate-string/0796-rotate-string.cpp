class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        for(int i =0;i<s.size();i++){
            if(s[i]==goal[0]){//find the first position and rotate it 
                string ans(s.size(),' ');
                for(int j =0;j<s.size();j++){
                    ans[j]=s[(i+j)%s.size()];
                }
                if(ans == goal) return true;
            }
        }
        return false;
        
    }
};