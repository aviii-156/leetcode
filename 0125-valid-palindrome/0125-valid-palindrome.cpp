class Solution {
public:
    bool isPalindrome(string s) {
        string orignal=s;
        string rev="";
        string valid="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){//only store number and alphabet
                valid+= tolower(s[i]);
            }
        }
        for(int i=valid.length()-1;i>=0;i--){
           rev.push_back(valid[i]); //reverse it
            
        }
        return valid == rev;
        
    }
};