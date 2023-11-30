class Solution {
public:

bool check(string s,int i,int j){
    
    while(i<=j){
    if(s[i]==s[j]){
        i++;
        j--;
       // return true;
    }
    else{
        return false;
    }

    }
    return true;

}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j){
        
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
    
    bool removeI=check(s,i+1,j);

    bool removeJ=check(s,i,j-1);

    return removeI || removeJ;

        }
        }
        return true;
    }
};
