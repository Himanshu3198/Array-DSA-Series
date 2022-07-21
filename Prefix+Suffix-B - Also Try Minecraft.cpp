
/*
 author:himanshu3198
https://codeforces.com/contest/1709/problem/B
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
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long int>>
#define INF 1e18
#define _Y puts("YES")
#define _N puts("NO")
#define showArr(v)         \
    for (auto it : v)      \
        cout << it << " "; \
    cout << E;
#define Print(ans) cout << ans << E;
#define sz(s) s.size();
#define Nitro()                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    ll n,m;
    cin>>n>>m;
    vl a(n),prefix(n,0),suffix(n,0);

    fr(i,n) cin>>a[i];
  
    for(int i=1;i<n;i++){

        if(a[i]>a[i-1]){
            prefix[i]+=prefix[i-1];
        }else{

            prefix[i]=prefix[i-1]+(a[i-1]-a[i]);
        }
    }
    // for(auto it:prefix) cout<<it<<" "<<E;
 

    for(int i=n-2;i>=0;i--){

        if(a[i]<a[i+1]){
            suffix[i]=suffix[i+1]+(a[i+1]-a[i]);
        }else suffix[i]+=suffix[i+1];
    }
    ll x,y;
    //    for(auto it:suffix) cout<<it<<" "<<E;

    while(m--){
       cin>>x>>y;
       x--;
       y--;

       if(x<=y){
        cout<<prefix[y]-prefix[x]<<E;
       }else{
        cout<<suffix[y]-suffix[x]<<E;
       }
        
    }

    
}

int main()
{
    Nitro();
    int t = 1;
    // cin >> t;

    while (t--)
    {

        solve();
    }

    return 0;
}
