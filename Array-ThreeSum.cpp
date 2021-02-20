#include<bits/stdc++.h>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
using namespace std;



void threeSum(int *arr,int n){
    sort(arr,arr+n);
    vector<int>v;
    for(int i=0;i<n-2;i++){
        for(int j=1;j<n-1;j++){


            int left=j+1;
          
            while(left<n){
                
                if(arr[i]+arr[j]+arr[left]==0){
               
                     cout<<"[";

                    cout<<arr[i]<<","<<arr[j]<<","<<arr[left]<<"] ";

                    arr[i]=INT16_MAX;
                     arr[j]=INT16_MAX;
                      arr[left]=INT16_MAX;
                }
             

                left++;
            }
   
        }
    }


   
}

void threeSum_Method_Two(int *arr,int n){
    sort(arr,arr+n);

    for(int i=0;i<n-2;i++){

        int p1=i+1;
        int p2=n-1;
        while(p1<p2){


            if(arr[i]+arr[p1]+arr[p2]==0){
                cout<<arr[i]<<" "<<arr[p1]<<" "<<arr[p2]<<"\n";
                arr[i]=INT16_MAX;
                arr[p2]=INT16_MAX;
                arr[p2]=INT16_MAX;
            }

            p1++;
            p2--;
        }
    }

}
int main()
{

    int arr[]={-1,0,1,2,-1,-4};
    // threeSum(arr,SIZE(arr));
    threeSum_Method_Two(arr, SIZE(arr));




}
