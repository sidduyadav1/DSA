class Solution {
public:

 string addStrings(string num1, string num2) {
        int p1=num1.size()-1;
        int p2=num2.size()-1;
        string ans="";
        solve(num1,num2,p1,p2,ans);
        reverse(ans.begin(),ans.end());
        return ans;
        
            }

void solve(string &num1,string &num2,int p1,int p2,string &ans,int carry=0){
//base case
if(p1<0&&p2<0){
    if(carry!=0){
        ans.push_back(carry+'0');
    }
            return;
    }

int n1=(p1>=0?num1[p1]:'0')-'0';
int n2=(p2>=0?num2[p2]:'0')-'0';

//int carry=0;
int csum=n1+n2+carry;
carry=csum/10;
int digit=csum%10;
ans.push_back(digit+'0');

//RE case
solve(num1,num2,p1-1,p2-1,ans,carry);

}


  
};
