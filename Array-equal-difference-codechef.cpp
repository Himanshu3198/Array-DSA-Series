
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

int main()
{
    fastio();
    int t = 1;
    cin >> t;

    while (t--)
    {

   
        ll n;
      cin>>n;

      vector<ll>a(n);

      fr(i,n){
          cin>>a[i];
      }

 
       if(n<=2){
           cout<<0<<E;
           continue;
       }


          unordered_map<int, int> freq;
      for (int i = 0; i < n; i++)
        freq[a[i]]++;
 
    
      int max_freq = INT_MIN;
       for (auto itr = freq.begin(); itr != freq.end(); itr++)
        max_freq = max(max_freq, itr->second);
   
        int ans=n-max_freq;

     if(ans==n-1){
         ans--;
     }
     cout<<ans<<E;
    }

   


    return 0;
}
