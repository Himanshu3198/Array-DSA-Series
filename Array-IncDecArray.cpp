#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> a, bool flag)
{

    int count = 0;
    int n = a.size();
    for (int i = 1; i < n; i++)
    {

        if (i != (n - 1))
        {
            if (flag)
            {
                if (a[i] <= a[i - 1])
                {
                    count++;
                    a[i] = a[i-1]+ 1;
                }
                flag = false;
            }
            else
            {

                if (a[i] >= a[i - 1])
                {
                    count++;
                    a[i] = a[i-1] - 1;
                }
                flag = true;
            }
        }else{

            if(flag){
                if(a[i]<=a[i-1]){
                   count++;

                }
            }else{
                if(a[i]>=a[i-1]){
                    count++;
                }
            }
        }
    }
    return count;
}
int main()
{

    vector<int> a = {2, 1, 2, 3, 4, 5, 2, 9};
    int n = a.size();
    int ans = min(solve(a, true), solve(a, false));
    cout << ans << "\n";
}
