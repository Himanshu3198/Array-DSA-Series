// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#
// time complexity O(n)
#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n, int k)
{
    map<int, int> mp;
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        int rem = k - a[i];
        if (mp.find(rem) != mp.end())
        {
            ct = ct + mp[rem];
        }
        mp[a[i]]++;
    }


    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    return ct;
}
int main()
{

    int n = 4, k = 2;
    int arr[] = {1, 1, 1, 1};

    cout << solve(arr, n, k);
    return 0;
}
