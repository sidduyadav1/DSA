class Solution {
public:
    int myAtoi(string s) {
        
        int i=0,sign=1,num=0;
        while(s[i]==' '){
            i++;
        }
     
     if(i<s.size() && s[i]=='+'||s[i]=='-'){
         sign=s[i]=='+'?1:-1;
         i++;
     }
      while(i<s.size() && isdigit(s[i])){
          num=num*10+(s[i]-'0');
          i++;
      }
return sign*num;


    }
};
