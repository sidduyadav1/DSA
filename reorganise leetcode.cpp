class Solution {
public:
    string reorganizeString(string s) {
        
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
       int max_num=INT_MIN;
        char max_char;
        for(int i=0;i<26;i++){
            if(hash[i]>max_num){
                max_num=hash[i];
                max_char=i+'a';
            }
        }
   
      int index=0;
      while(index<s.size() && max_num>0){
          s[index]=max_char;
        
          max_num--;
          index+=2;
      }
 if(max_num !=0){
     return "";
 }

hash[max_char-'a']=0;
for(int i=0;i<26;i++){
    while(hash[i]>0){
       index = (index >= s.size()) ? 1 : index;
        s[index]=i+'a';
        hash[i]--;
        index+=2;
    }
}
return s;

    }
};
