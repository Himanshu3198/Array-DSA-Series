/*
 author:himanshu3198
https://codeforces.com/contest/1637/problem/B
*/
#include     <bits/stdc++.h>
#define      ll long long int
#define      fr(i, n) for (int i = 0; i < (n); i++)
#define      rep(i, a, b) for (int i = (a); i < (b); i++)
#define      FORR(i, n) for (int i = (n); i >= 0; i--)
#define      fst first
#define      snd second
#define      E "\n"
#define      pb push_back
#define      mp make_pair
#define      all(x) (x).begin(), (x).end()
#define      MOD 1000000007LL
#define      MAX(a, b) ((a) > (b) ? (a) : (b))
#define      MIN(a, b) ((a) < (b) ? (a) : (b))
#define      ABS(x) ((x) < 0 ? -(x) : (x))
#define      setbits(x) __builtin_popcount(x)
#define      vi vector<int>
#define      vl vector<long long int>
#define      vvi vector<vector<int>>
#define      vvl vector<vector<long long int>>
#define      INF 1e18
#define      _Y puts("Yes")
#define      _N puts("No")
#define      showArr(v) for(auto it:v) cout<<it<<" "; cout<<E;
#define      Print(ans) cout<<ans<<E;
#define      Nitro()                      \
             ios_base::sync_with_stdio(false); \
             cin.tie(NULL);

using namespace std;



void himanshu3198()
{
   
   
     ll n;
     cin>>n;

     vl a(n);

     fr(i,n) cin>>a[i];

     

     ll ans=0;
     
     fr(i,n){

       ll count=0;
        for(int j=i;j<n;j++){
 
           if(a[j]==0) count++;

           ans+=(j-i+1+count);

        }
     }


     Print(ans);
     


}


int main()
{
    Nitro();
    int t = 1;
    cin >> t;

    while (t--)
    {

        himanshu3198();
    }

    return 0;
}
