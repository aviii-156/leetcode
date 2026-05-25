class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n =s.size();
        queue<int>q;
        q.push(0);
        vector<int>visited(n,0);
        visited[0]=1;
        int far =0;
        //bfs
        while(!q.empty()){
            int index =q.front();
            q.pop();
            if(index == n-1) return true;
            int start =max(far+1,index+minJump);
            int end =min(n-1,index+maxJump);
            for(int i =start ;i<=end;i++){
                if(s[i]=='0'&& !visited[i]){
                    visited[i]=true;
                    q.push(i);

                }
            }
            far=max(far,end );
        }
        return false;
        
    }
};