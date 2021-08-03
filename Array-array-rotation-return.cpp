/* 
   himanshu3198
   problem:Lunchtime july21  Array rotation return

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


int main()
{
    fastio();
    int t=1;
    cin >> t;
    while (t--){
      
        ll n;
        cin>>n;
   
       vector<int>a1(n),a2(n);


       fr(i,n) cin>>a1[i];

       fr(i,n) cin>>a2[i];

        int mini=INT_MAX;

        fr(i,n){
            int res=(a1[0]+a2[i])%n;
            mini=min(mini,res);
        }

        vector<int>idx;

        fr(i,n){
            int res=(a1[0]+a2[i])%n;
            if(res==mini){

                idx.pb(i);
            }
        }


        if(idx.size()==1){
      
            int low=0;
            for(int i=idx[0];i<n;i++){

                cout<<(a1[low]+a2[i])%n<<" ";
                   low++;
            }

            for(int i=0;i<idx[0];i++){
                cout<<(a1[low]+a2[i])%n<<" ";
                   low++;
            }
         
        }

        else{

            int min1=idx[0],min2=idx[1];

            vector<int>res1,res2;

            int low=0;
               for(int i=min1;i<n;i++){

                int ans=(a1[low]+a2[i])%n;
                 res1.pb(ans);
                   low++;
            }

            for(int i=0;i<min1;i++){
                 int ans=(a1[low]+a2[i])%n;
                 res1.pb(ans);
                   low++;
            }

            low=0;
                  for(int i=min2;i<n;i++){

                int ans=(a1[low]+a2[i])%n;
                 res2.pb(ans);
                   low++;
            }

            for(int i=0;i<min2;i++){
                 int ans=(a1[low]+a2[i])%n;
                 res2.pb(ans);
                   low++;
            }

            if(res1<res2){

                for(auto it:res1){
                    cout<<it<<" ";
                }
                cout<<E;
            }else{
                    for(auto it:res2){
                    cout<<it<<" ";
                }
                cout<<E;
            }
        }

  
    }
    return 0;
}