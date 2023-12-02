class Solution {
public:

int expand(string s,int size,int i,int j){
    int count=0;
    while(i>=0 && j<=size && s[i]==s[j]){
    
     count++;
     i--;
     j++;

    }
return count;

}

    int countSubstrings(string s) {
        int evenC;
        int oddC;
        int size=s.length()-1;
        int totalcount=0;
        for(int i=0;i<=size;i++){
          
          evenC=expand(s,size,i,i+1);

          oddC=expand(s,size,i,i);

         totalcount=totalcount+evenC+oddC;

        }

              return totalcount;




    }
};
