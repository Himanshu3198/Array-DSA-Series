time comeplexity O(n)
class Solution {
   
public:
     #define ll long long
    
    

    vector<long long> maximumEvenSplit(long long sum) {
         
        if(sum%2) return {};
      ll currSum=0;
      ll itr=2LL;
        
        vector<long long>res;
        while(currSum+itr<=sum){
            currSum+=itr;
            res.push_back(itr);
            itr+=2LL;
        }
        
        
        ll n=res.size();
        
        res[n-1]+=sum-currSum;
        
        return res;
          
        
        
        
    }
};
static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
