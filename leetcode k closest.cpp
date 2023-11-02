class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int l=0;
        int h=n-1;
        while(h-l>=k){

         if(abs(arr[l]-x)>abs(arr[h]-x)){
             l++;
         }
         else{
             h--;
         }

        }
        vector<int>ans;
for(int i=l;i<=h;i++){
ans.push_back(arr[i]);
}
return ans;

    }
};
