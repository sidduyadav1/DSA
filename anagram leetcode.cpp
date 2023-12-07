class Solution {
public:
    bool isAnagram(string s, string t) {
        int mapping[256]={0};

        for(int i=0;i<s.length();i++){
            mapping[s[i]]++;
        }
    
       for(int i=0;i<t.length();i++){
            mapping[t[i]]--;
       }

       for(int i=0;i<256;i++){
           if(mapping[i]!=0){
               return false;
           }
       }
       return true;

    }
};
