
// merge two sorted array without using extra space
// time complexity o(n+m*(log(n+m)))
#include<bits/stdc++.h>
using namespace std;


void merge(int a1[],int a2[],int n,int m){

    int p1=n-1,p2=0;

    while(p1>=0 && p2<m){

        if(a1[p1]>=a2[p2]){
            swap((a1[p1]),(a2[p2]));
            p1--;
            p2++;
        }
        else{
            p1--;
        }
    }

    sort(a1,a1+n);
    sort(a2,a2+m);

    for(int i=0;i<n;i++){

        cout<<a1[i]<<" ";
    }
  
    for(int i=0;i<m;i++){

        cout<<a2[i]<<" ";
    }
  cout<<"\n";




 
}

int main(){

    int arr1[]={10,12};
    int arr2[]={5,8,20};
      int n=sizeof(arr1)/sizeof(arr1[0]);


    int m=sizeof(arr2)/sizeof(arr2[0]);

    merge(arr1,arr2,n,m);
    return 0;
}



//  method 2  gapping method  time complexity  O(nlogn)
class Solution{
    public:
        //Function to merge the arrays.

        
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
                    int i, j, gap = (n + m)/2+(n+m)%2;
    while(gap>0) 
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0; 
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
        
        if(gap<=1){
            gap=0;
        }
        gap=(gap)/2+(gap)%2;
    }
        }
};
