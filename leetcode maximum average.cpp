class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=k-1;
        int n=nums.size();
        int maxsum=0;
      int sum=0;
        for(int s=i;s<=j;s++){
             sum=sum+nums[s];
        }
maxsum=sum;
//i++;
j++;
while(j<n){
    sum=sum-nums[i++];
    sum=sum+nums[j++];
    if(sum>maxsum)
    maxsum=sum;
}

return maxsum/(double)k;
    }
};
