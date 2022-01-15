
/*
 author:himanshu3198

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
   
   
     int n,m,r,c;

     cin>>n>>m>>r>>c;

      char a[n][m];

      
      bool isB=false;
      
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){

              cin>>a[i][j];
              if(a[i][j]=='B'){
                  isB=true;
              }
          }
      }

      r--;
      c--;


      if(a[r][c]=='B'){
          
        cout<<0<<E;
         return;
      }

      if(!isB){
          cout<<-1<<E;
          return;
      }
    //    isB=false;
      for(int i=0;i<m;i++){
            
            if(a[r][i]=='B'){
               
               cout<<1<<E;
               return;
            }
      }

      for(int i=0;i<n;i++){
          if(a[i][c]=='B'){
              cout<<1<<E;
              return;
          }
      }

      cout<<2<<E;

     

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
