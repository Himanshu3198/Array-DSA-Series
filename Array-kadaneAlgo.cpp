// Kadane's algo
// time complexity o(n)
#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int max_start=0,max_end=0;
    for(int i=0;i<n;i++){
        max_end+=arr[i];
        if(max_start<max_end){
            max_start=max_end;
        }
        if(max_end<0){
            max_end=0;
        }
    }
    return max_start;
    
    
}

int main(){
    int arr[]={1,2,3,-2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxSubarraySum(arr,n)<<"\n";
    return 0;
    
}

// expected ouput 9