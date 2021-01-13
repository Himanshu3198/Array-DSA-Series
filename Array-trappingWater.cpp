#include<bits/stdc++.h>
#include<vector>
#define E endl
#define pb push_back
using namespace std;



 int min(int a,int b){
        return (a<b)?a:b;
 } 

 int main(){
        // int arr[]={2,0,0,4,0,0,0,8,0,0,9,0,0,1};
     int arr[]={3,0,0,5,0,0,7,0,0,1,0,0,9,0,0,0,8};
    //    int arr[]={3,0,2,0,4};
    //   int arr[]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
     int n=sizeof(arr)/sizeof(arr[0]);

     vector<int> v1,v2,v3;
     int x=arr[0];

     for(int i=1;i<n-1;i++){
         if(x<arr[i]){
          x=arr[i];   
         }
         v1.pb(x-arr[i]);

     }
     int y=arr[n-1];
     for(int i=n-2;i>=1;i--){
         if(y<arr[i]){
             y=arr[i];
         }
         v2.pb(y-arr[i]);

     }
     int m=v2.size();
  
    int sum=0;

    for(int i=m-1;i>=0;i--){
        
          v3.pb(v2[i]);
         
     }
 

     for(int i=0;i<m;i++){
         
      sum+=min(v1[i],v3[i]);
         
     }
       cout<<sum<<E;

    return 0;
 }