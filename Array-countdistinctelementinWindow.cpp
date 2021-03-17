#include<bits/stdc++.h>
using namespace std;

vector<int> countDistinct(int *a,int k,int n){
 vector<int>v;
      int p1=0,p2=k-1;
      int i=p1,j=p2;
      while(j<n){
         map<int,int>m1;
         while(i<=j){
             m1[a[i]]++;
             i++;
             
         }
         v.push_back(m1.size());
         m1.clear();
        //  p2=p2+k;
         j=j+1;
         p1++;
         i=p1;
          
      }
      
      return v;

}

// method 2 in O(n)

vector <int> countDistinct (int arr[], int n, int k)
{
      vector<int>v;
     map<int, int> m; 
  
   
    int dist_count = 0; 
  
   
    for (int i = 0; i < k; i++) { 
        if (m[arr[i]] == 0) { 
            dist_count++; 
        } 
        m[arr[i]] += 1; 
    } 
  
       v.push_back(dist_count);
  
    
    for (int i = k; i < n; i++) { 
     
        if (m[arr[i - k]] == 1) { 
            dist_count--; 
        } 
       
        m[arr[i - k]] -= 1; 
  

        if (m[arr[i]] == 0) { 
            dist_count++; 
        } 
        m[arr[i]] += 1; 
  
         v.push_back(dist_count);   
    } 
     return v;
    
}


int main(){

    int arr[]={1, 2, 1, 3, 4, 2, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    vector<int>vec;

    vec=  countDistinct(arr,k,n);

    for(auto it:vec){
        cout<<it<<" ";
    }
      return 0;

}
