class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int,vector<int>>map;
        int  n =nums.size();
        for(int i =0;i<n;i++){
            map[nums[i]].push_back(i);
        }
        vector<int>result;
        for(int i =0;i<queries.size();i++){
            int q =queries[i];
            vector<int>&pos = map[nums[q]];//tske refrence dont make the copy it get time limit 
            if(pos.size() ==1){
                result.push_back(-1);
                continue;
            }
            int idx = lower_bound(pos.begin(),pos.end(),q)-pos.begin();//binary search 
            int m = pos.size();
            // previous and next occurrence
            int prevIdx = pos[(idx - 1 + m) % m];
            int nextIdx = pos[(idx + 1) % m];
            // distances
            int d1 = abs(q - prevIdx);
            int d2 = abs(q - nextIdx);
            result.push_back(min({d1, d2, n-d1, n-d2}));

        }
        return result;
        
    }
};