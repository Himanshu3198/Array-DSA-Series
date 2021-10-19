/*
 author:himanshu3198
 https://codeforces.com/contest/1593/problem/B
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


void solve(){

    
       ll num;
       cin>>num;
        if(num%25==0) {
    
              cout<<"0\n";
              return;
          }


       ll res=20;

           vector<ll> s;


           while(num>0){
                 int x=num%10;
               s.push_back(x);
               num/=10;
           }
           reverse(all(s));
           int n=s.size();
          
        
       for(ll i=0;i<n;i++){
               
               
           for(ll j=i+1;j<n;j++){
                
                

                if(s[i]==2 and s[j]==5){
            
                       ll ans=(j-i)-1+(n-(j+1));

                    res=min(res,ans);

                }
  
                 if(s[i]==5 and s[j]==0){

                   ll ans=(j-i)-1+(n-(j+1));

                    res=min(res,ans);
                }
                 if(s[i]==7 and s[j]==5){

                       ll ans=(j-i)-1+(n-(j+1));

                    res=min(res,ans);
                }
                 if(s[i]==0 and s[j]==0){

                    ll ans=(j-i)-1+(n-(j+1));

                    res=min(res,ans);
                }
                
                

            }
       }


    cout<<res<<E;
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
  
   


   
