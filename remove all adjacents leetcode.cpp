class Solution {
public:
bool isPossible(string&ans,int k,char newc){
    int size=ans.size()-1;
for(int i=0;i<k;i++){
    if(ans[size]!=newc){
        return false;
    }
    else{
        size--;
    }
}     
return true;

}
    string removeDuplicates(string s, int k) {
        string ans="";

        for(int i=0;i<s.size();i++){
            if(ans.size()<k-1){
              ans.push_back(s[i]);
            }
            else{
                if(isPossible(ans,k-1,s[i])){
                     for(int j=0;j<k-1;j++){
                         ans.pop_back();
                     }
                }
                else{
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;

    }

};
