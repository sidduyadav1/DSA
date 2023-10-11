class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
for(int i=0;i<n;i++){
    int lsum=0,rsum=0;
    for(int j=0;j<n;j++){
        if(j<i)
            lsum+=nums[j];
        
        if(j>i)
            rsum+=nums[j];

    }
    if(lsum==rsum)
    return i;
}
return -1;


    }
};
