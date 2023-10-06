class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
         vector<int> newv(n,0);
        int negi=1;
        int posi=0;
        for(int i=0;i<n;i++){
           if(nums[i]>0){
            newv[posi]=nums[i];
            posi+=2;
           }
       else{
          newv[negi]=nums[i];
              negi+=2;
       }

        }
return newv;

    }
};
