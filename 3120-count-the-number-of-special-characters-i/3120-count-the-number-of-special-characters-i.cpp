class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        for(int i =0;i<word.size();i++){
            if(isupper(word[i])){
                mp[tolower(word[i])]++;
            }
        }
        int counter=0;
        for(int i =0;i<word.size();i++){
            if(islower(word[i])&& mp[word[i]]>0){
                counter++;
                mp[word[i]] = 0;
            }
        }
        return counter;
        
    }
};