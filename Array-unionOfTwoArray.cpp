#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6]={85, 25, 1, 32, 54, 6};
    int b[2]={85,2};

    map<int,int>m;
    for(int i=0;i<6;i++){
        m[a[i]]++;
    }
     for(int i=0;i<2;i++){
        m[b[i]]++;
    }
    cout<<m.size()<<"\n";
}