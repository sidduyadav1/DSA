class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool ispossible(int start,int end,int m,int n,int arr[],int mid){
        int c=1;
        int psum=0;
        for(int i=0;i<n;i++){
           // psum=psum+a[i];
           if(arr[i]>mid){
               return false;
           }
            if(psum+arr[i]>mid){
                c++;
                psum=arr[i];
                if(c>m){
                    return false;
                }
            }
            else{
                psum=psum+arr[i];
            }
        }
        
        return true;
    }
    int findPages(int arr[], int n, int m){
        
        if(m>n)
        return -1;
   int result=0;
   int min=arr[0];
   int start=0;
  int end=0;
   for(int i=0;i<n;i++){
       if(arr[i]<min){
           min=arr[i];
       }
       end=end+arr[i];
   }
   start=min;
        while(start<=end){
            
            int mid=(start+end)/2;
            
            if(ispossible(start,end,m,n,arr,mid)){
               result=mid;
               end=mid-1;
            }
            else{
                start=mid+1;
            }
            
        }
        
        
    }
    
    
    
    
    
    
};
