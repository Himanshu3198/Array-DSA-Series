#define ll  long long int
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
      
           int n=nums.size();
           vector<ll>v(n);
           v[0]=nums[0];
           for(int i=1;i<n;i++){
               v[i]=v[i-1]+nums[i];
           }
        
           // for(auto it:v) cout<<it<<" ";
        
           int res=0;
           for(int i=0;i<n;i++){
               
               if(i==n-1) continue;
                ll x=v[n-1]-v[i];
               if(v[i]>=x) res++;
           }
        return res;
    }
};
