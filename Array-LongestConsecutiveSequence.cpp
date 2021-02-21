
// longest consecutive sequence in array in c++;

#include<bits/stdc++.h>
using namespace std;


void LCS(vector<int>&nums){
    sort(nums.begin(),nums.end());
    int count=0;
    int max_length=INT_MIN;


            int p1,p2=0;
    for(int p1=1;p1<nums.size();p1++){

        if(nums[p1]!=nums[p2]){
            p2++;
            nums[p2]=nums[p1];
        }
    } 


    nums.resize(p2+1);

    for(int i=0;i<nums.size();i++){


        if( i>0 && nums[i]==nums[i-1]+1){
            count++;
        }
        else{
        
            count=1;
        }

        max_length=max(max_length,count);
    }

    cout<<max_length<<"\n";
}


int main(){

    vector<int> v={100,4,200,1,3,2};

    LCS(v);
    return 0;
}
