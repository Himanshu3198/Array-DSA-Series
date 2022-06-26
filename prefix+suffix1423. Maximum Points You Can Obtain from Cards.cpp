//  t.c O(n)
//  s.c O(2n)
class Solution {
public:
    int maxScore(vector<int>& card, int k) {
     
              int n=card.size();
              vector<long long>prefix(n,0),suffix;
              prefix[0]=card[0];
              for(int i=1;i<n;i++){
                  prefix[i]=prefix[i-1]+card[i];
              }
              suffix.push_back(card[n-1]);
              for(int i=n-2;i>=0;i--){
                  suffix.push_back(suffix.back()+card[i]);
              }
              int res=0;
              res=max(res,(int)prefix[k-1]); 
              res=max(res,(int)suffix[k-1]);
              int ans=0;
              for(int i=0;i<n &&k>0;i++){
                  ans=prefix[i];
                  k--;
                  if(k-1>=0 && k<n){
                      ans+=suffix[k-1];
                  }
                  res=max(res,ans);
              }
              return res;
    }
};
