class Solution {
public:
 
 void solve(vector<int>& prices,int &minP,int &maxP,int &maxprofit,int i){

//base  
if(i==prices.size()){
    return;
}

if(prices[i]<minP){
    minP=prices[i];
}
maxP=prices[i]-minP;

if(maxP>maxprofit){
    maxprofit=maxP;
}
return solve(prices,minP,maxP,maxprofit,i+1);

 } 

 int maxProfit(vector<int>& prices) {
int minP=INT_MAX;
int maxP=INT_MIN;
int maxprofit=0;
int i=0;
        solve(prices,minP,maxP,maxprofit,i);
        return maxprofit;
    }
};
