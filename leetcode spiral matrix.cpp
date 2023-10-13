class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int rowbeg=0;
        int rowend=n-1;
        int colbeg=0;
        int colend=m-1;
        int totalElements=n*m;
        int count=0;
        while(count<totalElements){
          
          for(int i=rowbeg;i<=colend&&count<totalElements;i++){
              ans.push_back(matrix[rowbeg][i]);
              count++;
          }
rowbeg++;
          for(int i=rowbeg;i<=rowend&&count<totalElements;i++){
              ans.push_back(matrix[i][colend]);
              count++;
          }
colend--;
           for(int i=colend;i>=colbeg&&count<totalElements;i--){
               ans.push_back(matrix[rowend][i]);
               count++;
           }
rowend--;
        for(int i=rowend;i>=rowbeg&&count<totalElements;i--){
            ans.push_back(matrix[i][colbeg]);
            count++;
        }
        colbeg++;
          }
return ans;



    }
};
