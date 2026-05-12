class Solution {
public:
bool isPossible(vector<vector<int>>&tasks ,int energy ){
    for(auto &task :tasks){
        int actual =task[0];
        int minimum =task[1];
        if(minimum >energy){
            return false;
        }
        energy-=actual;
    }
    return true;
}
    int minimumEffort(vector<vector<int>>& tasks) {
        int n = tasks.size();
        int l =0;
        int r =1e9;// pick the number in 10^4 and length 10^5 
        int result =INT_MAX;
        
        auto lamda=[](auto &task1 ,auto &task2){
            int diff1=task1[1]-task1[0];
            int diff2=task2[1]-task2[0];
            return diff1>diff2;
        };
        sort(begin(tasks),end(tasks),lamda);//spacial type of sorting 
         while(l<=r){ //binary search find the exect number 
            int mid =l+(r-l)/2;
            if(isPossible(tasks,mid)){
                result =mid ;
                r=mid-1;
            }else{
                l=mid+1;
            }

         }
         return result;
        
    }
};