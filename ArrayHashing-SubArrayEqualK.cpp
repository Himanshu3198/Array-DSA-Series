#include<bits/stdc++.h>
using namespace std;


int SubArrayEqualK(vector<int>&nums,int k){

    int n=nums.size();

    int currsum=0;
    int count=0;

    int i=0;

    unordered_map<int,int>m1;
    while(i<n){


        currsum+=nums[i];

        if(currsum==k){
            count++;
        }

        if(m1.find(currsum-k)!=m1.end()){
            count+=m1[currsum-k];
        }

        m1[currsum]+=1;
        i++;


    }
    return count;
}
int main(){

    vector<int> nums={3,4,7,2,-3,1,4,2};

    cout<<SubArrayEqualK(nums,7)<<"\n";
    return 0;

    
}