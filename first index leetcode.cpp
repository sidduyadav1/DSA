class Solution {
public:
    int strStr(string a, string b) {
     
     string ans;
     int n=b.size();
     for(int i=0;i<a.size();i++){

      ans=a.substr(i,n);
      if(ans==b){
          return i;
      }


     }
     return -1;






 //return a.find(b);
    }
};
