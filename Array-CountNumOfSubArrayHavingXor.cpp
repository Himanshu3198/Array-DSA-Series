#include<bits/stdc++.h>
using namespace std;


void CountXOR(vector<int>&v,int m){
    int n=v.size();
    int count=0;

    for(int i=0;i<n;i++){

        int xor_sum=0;

        for(int j=i;j<n;j++){
            xor_sum=xor_sum^v[j];
            if(xor_sum==m){
                count++;
            }
        }
    }

    cout<<count<<"\n";
}

int main(){

    vector<int> v={ 4, 2, 2, 6, 4};
    CountXOR(v,6);
    return 0;
}
