// Largest subarray with 0 sum
// time complexity O(n*log(n))

#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int arr[], int n)
{
    // Your code here
    
    
    unordered_map<int,int> m1;
    int max_length=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            max_length=i+1;
        }
        
        else{
            if(m1.find(sum)!=m1.end()){
                max_length=max(max_length,i-m1[sum]);
            }
            else{
                m1[sum]=i;
            }
        }
        
        
    }
    
    return max_length;
}
