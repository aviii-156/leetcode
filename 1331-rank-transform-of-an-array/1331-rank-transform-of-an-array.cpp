class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int rank=1;
        unordered_map<int,int>mp;
        vector<int>ranks=arr;
        vector<int>ans;
        sort(ranks.begin(),ranks.end());
        for(int i =0;i<ranks.size();i++){
            if(!mp.count(ranks[i])){
                mp.insert({ranks[i],rank++});
            }

        }
        for(int i=0;i<arr.size();i++){
            if(mp.count(arr[i])){
                ans.push_back(mp[arr[i]]);

            }

        }
        return ans;
        
        
    }
}; 