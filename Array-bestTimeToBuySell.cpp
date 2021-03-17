#include<bits/stdc++.h>
using namespace std;

void buySell(vector<int>&prices){
    int n=prices.size();
      int i,profit=0,buy=INT_MAX;
        
        for(i=0;i<prices.size();i++){
    
             buy=min(buy,prices[i]);
            profit=max(profit,prices[i]-buy);
        }
        
        cout<< profit<<" \n";

}

int main(){

    vector<int> v={7,1,5,3,6,4};
    buySell(v);
    return 0;
}