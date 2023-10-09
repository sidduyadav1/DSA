class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    vector<int>ans;
     int n=mat.size();
         int sum=0;
        int count=0;
        int index=0;
        for(int i=0;i<n;i++){
           
            for(int j=0;j<mat[i].size();j++){

                if(mat[i][j]==1){
            sum=sum+mat[i][j];
                }
            if(sum>count){
             index=i;
            }
                
            }
            if(sum>count){
         count=sum;
       //  sum=0;
            }
            sum=0;
        }
        ans.push_back(index);
         ans.push_back(count);
         return ans;

    }
};
