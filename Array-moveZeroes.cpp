#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={0,1,0,3,12};
    int n=sizeof(arr)/sizeof(arr[0]);

    queue<int>q;
    for(int i=0;i<n;i++){

        if(arr[i]!=0){
            q.push((arr[i]));
            arr[i]=0;
        }
    }
    int i=0;
    while(q.size()>0){
        // cout<<q.front()<<" ";
        arr[i]=q.front();
        q.pop();
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}