class Solution {
public:

int search(vector<int>& nums, int target) {

int n=nums.size();
int s=0;
int e=n-1;
int m=(s+e)/2;

while(s<=e){

m=(s+e)/2;
// if(s==e){
//     return s;
// }

if(nums[m]==target)
return m;
if(nums[s]<=nums[m]){
if(nums[s]<=target && nums[m]>=target){
    e=m-1;//check
}
else{
    s=m+1;
}
}

else{
    if(nums[m]<=target && nums[e]>=target){
        s=m+1;//check
    }
    else{
        e=m-1;
    }
}

}
return -1;
}
};
