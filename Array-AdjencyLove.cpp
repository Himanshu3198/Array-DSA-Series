/* 
   himanshu3198
   https://www.codechef.com/LTIME106B/problems/ADJLOVE/
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
#define fastio()        ios_base::sync_with_stdio(false);  cin.tie(NULL);
using namespace std;



void solve(){

  ll n;
  cin>>n;

  ll prod=0;

  vector<ll>odd;
  vector<ll>even;
  vector<ll>a(n);

  fr(i,n){
      cin>>a[i];
      if(a[i]%2==0) even.push_back(a[i]);
      else odd.push_back(a[i]);

  }
          if(odd.size()<2){
            cout<<"-1\n";
            return;
        }
        if(even.size()==0 and n%2!=0){
             cout<<"-1\n";
             return;
        } 

        if(odd.size()>=2){

            if(odd.size()%2==0){

                   for(auto &it:odd) cout<<it<<" ";
                    for(auto &it:even) cout<<it<<" ";
                     cout<<"\n";
            }else{
                cout<<odd[0]<<" ";
                for(auto &it:even) cout<<it<<" ";
                for(int i=1;i<odd.size();i++)cout<<odd[i]<<" ";
                cout<<"\n";
            }
        }else{
             cout<<"-1\n";
             return;
        }
      
      
    

  
}
int main()
{
    fastio();
    int t=1;
    cin >> t;
    while (t--){
      solve();
        
    }
    return 0;
}
