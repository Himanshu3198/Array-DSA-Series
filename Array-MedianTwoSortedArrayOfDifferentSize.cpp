#include<bits/stdc++.h>
using namespace std;

int main(){

     vector<int> v1{1,2};
     vector<int>v2{3,4};

   
     for(int i=0;i<v2.size();i++){
         v1.push_back(v2[i]);
     }
     sort(v1.begin(),v1.end());

     double mid ;
    int msize=v1.size()/2;
     if(msize%2==0){
         mid= (v1[msize]+v1[msize-1])/2.0;
     }
     else{
           mid= v1[msize];
     }

     cout<<fixed<<setprecision(6)<<mid<<"\n";

}