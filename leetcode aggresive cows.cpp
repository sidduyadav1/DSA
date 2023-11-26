//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

bool possible(int mid,int last,vector<int> &stalls,int k,int n){
    int cowsC=1;
    
for(int i=1;i<n;i++){
    
    if(stalls[i]-last>=mid){
        cowsC++;
         last=stalls[i];
    }
    if(cowsC>=k)
   return true;
}
    return false;
}
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here 

        sort(stalls.begin(),stalls.end());
        
        int last=stalls[0];
        int start=0;
        int end=stalls[n-1]-stalls[0];
        int ans=0;
        while(start<=end){
            int mid=(start+end)/2;
            if(possible(mid,last,stalls,k,n)){
                start=mid+1;
                ans=mid;
            }
            else{
                end=mid-1;
            }
        }
        return end;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends
