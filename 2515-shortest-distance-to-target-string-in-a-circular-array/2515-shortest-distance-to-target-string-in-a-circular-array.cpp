class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans =INT_MAX;
        
        int n =words.size();
        for(int i =0;i<words.size();i++){
            if(words[i]==target ){
                int diff = abs(i-startIndex);
                ans = min(ans ,min(diff,n-diff));//left right side check where index is minmum
            }
            
        }
        
        return ans == INT_MAX ? -1 :ans;
    }
};