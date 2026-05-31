class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n =asteroids.size();
        long long currmass= mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<n;i++){
            if(currmass<asteroids[i]){
                return false;
            }
            currmass = currmass+ asteroids[i];
        }
        return true;
        
    }
};