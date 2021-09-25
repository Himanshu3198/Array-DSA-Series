/* 
     himanshu3198
     https://www.codechef.com/LTIME100C/problems/UNQEQ

  */
#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define fst first
#define snd second
#define E "\n"
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define setbits(x) __builtin_popcount(x)
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void printEqualSumSets(int arr[], int n)
{
    int i, currSum;


    int sum = accumulate(arr, arr + n, 0);

 
    if (sum & 1)
    {
        cout << "NO\n";
        return;
    
    }

 
    int k = sum >> 1;


    bool dp[n + 1][k + 1];


    for (i = 1; i <= k; i++)
        dp[0][i] = false;


    for (i = 0; i <= n; i++)
        dp[i][0] = true;

    for (i = 1; i <= n; i++)
    {
        for (currSum = 1; currSum <= k; currSum++)
        {

      
            dp[i][currSum] = dp[i - 1][currSum];

         
            if (arr[i - 1] <= currSum)
                dp[i][currSum] = dp[i][currSum] |
                                 dp[i - 1][currSum - arr[i - 1]];
        }
    }

  
    set<int> set1, set2;

 
    if (!dp[n][k])
    {
        cout << "-1\n";
        return;
    }

    i = n;
    currSum = k;

    while (i > 0 && currSum >= 0)
    {

      
        if (dp[i - 1][currSum])
        {
            i--;
            set2.insert(arr[i]);
        }

        else if (dp[i - 1][currSum - arr[i - 1]])
        {
            i--;
            currSum -= arr[i];
            set1.insert(arr[i]);
        }
    }

    if (set1.size() == set2.size())
    {

        cout << "YES\n";
         for(auto it:set2){

             cout<<it<<" ";
         }
      
         cout<<E;
            for(auto it:set1){

             cout<<it<<" ";
         }
        

        cout << E;
    }else{

        cout<<"NO\n";
    }
}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
    {

      int n;
        cin >> n;
        if (n % 4 != 0)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES" << endl;
        vector<int> v1;
        vector<int> v2;
        int l = 1;
        int r = n;
       

        for (int i = 1; i <= n / 2; i += 2)
        {

            v1.pb(l);
            l++;

            v1.push_back(r);
            r--;
        }

         while(l<=r){

             v2.pb(l);
             l++;
         }
         
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for (auto i : v1)
            cout << i << " ";
        cout << endl;
        for (auto i : v2)
            cout << i << " ";
     
      
       

    }

    return 0;
}
