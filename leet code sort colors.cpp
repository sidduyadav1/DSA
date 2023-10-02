class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n=nums.size();
   /* for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(nums[i]>nums[j]){
            swap(nums[i],nums[j]);
        }
    }
    }*/

     int zero=0,one=0,two=0;
      for(int i=0;i<n;i++){
          if(nums[i]==0){
              zero++;
          }
            if( nums[i]==1){
                one++;
            }
            if(nums[i]==2){
                two++;
            }
       for(int i=0;i<zero;i++){
        nums[i]=0;
       }
         for(int i=zero;i<one+zero;i++){
              nums[i]=1;
       }
      for(int i=one+zero;i<one+zero+two;i++){
          nums[i]=2;
      }

    }
    }
};
