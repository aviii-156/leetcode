class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n =arr.size();
        unordered_map<int,vector<int>>mp;
        for(int i =0;i<n;i++){
            mp[arr[i]].push_back(i);
        }
        queue<int>q;
        q.push(0);
        vector<int>visited(n,false);
        visited[0]=true;
        int step =0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int temp=q.front();
                q.pop();
                if(temp==n-1) return step;
                int x=temp-1;
                int y =temp+1;
                if(x>=0&& !visited[x]){
                    q.push(x);
                    visited[x]=true;
                }
                if(y>=0 && y<n && !visited[y]){
                    q.push(y);;
                    visited[y]=true;
                }
                for(auto j :mp[arr[temp]]){
                    if(!visited[j]){
                        q.push(j);
                        visited[j]=true;

                    }
                }
                mp[arr[temp]].clear();
            }
            step++;
        }
        return -1;
    }
};