
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
 
 int gcd(int a,int b){

    if(b==0) return a;
    return (b,a%b);
 }
 int lcm(int a,int b){

    return (a*b)/gcd(a,b);
 }
 
void solve()
{
   int n,q;
   cin>>n>>q;
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   vector<long long int>prefix(n,0);
   prefix[0]=a[0];
   for(int i=1;i<n;i++){
       prefix[i]=prefix[i-1]+a[i];
   }
   ll tot=prefix[n-1];
   while(q--){
       
       int l,r,k;
       cin>>l>>r>>k;
       ll add=k*(r-l+1);
       l--;
       r--;
       ll rem=l-1>=0?prefix[l-1]:0;
       int exc=prefix[r]-rem;
       ll ans=tot-exc+add;
       if(ans%2==0)  puts("NO");
       else  puts("YES");
   }

        
}
 
int main()
{
    Nitro();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
