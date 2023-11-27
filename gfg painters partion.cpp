//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  bool ispossible(long long mid,int n,int k,int arr[],long long start){
     long long sum=0;
     int count=1;
      for(int i=0;i<n;i++){
       if(arr[i]>mid){
           return false;
           //start=mid+1;
       }
      if(sum+arr[i]>mid){
          count++;
          sum=arr[i];
        //   if(arr[i]>mid){
        //      // start=mid+1;
        //      return false
        //   }
          
          if(count>k) return false;
      }
      else{
          sum=sum+arr[i];
      }
         
      }
      return true;
      }
  
  
  
  
    long long minTime(int arr[], int n, int k){
    
        // code here
        // return minimum time
        long long result=0;
        long long end=0;
        long long start=0;
    for(int i=0;i<n;i++){
      end+=arr[i];
    }    
    
    while(start<=end){
        long long mid=start+(end-start)/2;
        
        if(ispossible(mid,n,k,arr,start)){
            result=mid;
            end=mid-1;
        }
        
        else{
            start=mid+1;
        }
    }
       return result; 
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends
