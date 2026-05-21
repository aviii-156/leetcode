class Solution {
public:
    
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>st;
        int ans =0;
        for(int i =0;i<arr1.size();i++){
            int num =arr1[i];
            while(num>0 && !st.count(num)){
                st.insert(num);
                num=num/10;

            }


        }
        for(int i =0;i<arr2.size();i++){
            int num =arr2[i];
            while(num>0 && !st.count(num)){
                num =num/10;//if not match then make it 0 by devidiving it contionusly 
            }
            if(num>0){
                ans=max(ans,(int)log10(num)+1);//change the log defalt to int ans  find the log 10 ^nums so that how many digit present can be calculated 
            }

        }
        return ans;
        
    }
};