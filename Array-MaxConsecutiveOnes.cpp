#include <bits/stdc++.h>
using namespace std;

void MaxOnesInarray(vector<int>&arr)
{
    int n = arr.size();


    int max_ones = INT_MIN;
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 1)
        {
            count++;
        }

        else{
            count=0;
        }
          max_ones=max(max_ones,count);
    }

    cout << max_ones << "\n";
}
int main()
{

     vector<int> v= {1, 1, 0, 1, 1, 1};
    MaxOnesInarray(v);
    return 0;
}