/*
 author:himanshu3198
 https://codeforces.com/contest/1619/problem/B

*/
#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define fst first
#define snd second
#define E "\n"
#define pb push_backCF
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

void solve()
{
   
     ll n;
     cin>>n;
     const int mod=1e9+7;
    ll res=1;
    if(n==1){
        cout<<1<<E;
        return;
    }

      set<int>v;
      for(long long i=1;i*i<=n;i++){
            ll x=(i*i);
        

            if(x<=n){
                v.insert(x);
            }
            
      }
      for(long long i=1;i*i*i<=n;i++){
            ll x=(i*i*i);
        

            if(x<=n){
                v.insert(x);
            }
            
      }

      cout<<v.size()<<E;
      return;
}


int main()
{
    fastio();
    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();
    }

    return 0;
}
