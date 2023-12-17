class Solution {
public:

 bool ispalin(int i,int j,string&s){
   
   while(i<j){
     if(s[i]==s[j]){
         i++;
         j--;
     }
     else{
         return false;
     }

   }
   return true;

}
    string longestPalindrome(string s) {
        string t="";
        string ans="";
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(ispalin(i,j,s)){
                    t=s.substr(i,j-i+1);
                    ans=t.size()>ans.size()?t:ans;
                }
            }

        }
return ans;

    }
};
