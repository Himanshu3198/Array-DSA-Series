// remove duplicate from sorted array using cpp
// time complexity O(n)
#include<bits/stdc++.h>
using namespace std;

// void removeDuplicate(vector<int>&nums){


//     int n=nums.size();
//     bool repeat[n+1]={false};
//     vector<int> vec;
//     int count =0;

//     for(int i=0;i<n;i++){
//         if(repeat[nums[i]]==true){
//             // vec.push_back(nums[i]);
//             nums[i]=repeat[nums[i]];
//             count++;
//             // repeat[nums[i]]==true;
//         }
//         else{
//             // continue;
//             repeat[nums[i]]=true;
//         }
//     }

//     nums.resize(count);

//     cout<<nums.size()<<"\n";
//     for(auto it:nums){
//         cout<<it<<" ";
//     }
//     cout<<"\n";

// }

// void removeDuplicateMethod2(vector<int>&nums){
//      set<int> s1; 
//      int n=nums.size();

//      for(int i=0;i<n;i++){


//          s1.insert(nums[i]);
//      }
   
//        set<int>::iterator itr; 
//        for(itr=s1.begin();itr!=s1.end();itr++){
//            int i=0;
//         //    cout<<*itr<<" ";
//            nums[i]=*itr;
//            i++;
//        }


//        nums.resize(s1.size());
//     //    cout<<"\n"<<s1.size();
//       cout<<nums.size()<<"\n";
//     for(auto it:nums){
//         cout<<it<<" ";
//     }
//     cout<<"\n";




// }

void removeDuplicateMethod3TwoPointerApproach(vector<int>&nums){
    int n=nums.size();
    int p1,p2=0;
    for(int p1=1;p1<n;p1++){

        if(nums[p1]!=nums[p2]){
            p2++;
            nums[p2]=nums[p1];
        }
    } 


    nums.resize(p2+1);
       for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){



    vector<int>nums={0,0,1,1,1,2,2,3,3,4};

    // removeDuplicate(nums);
    removeDuplicateMethod3TwoPointerApproach(nums);
    return 0;
}