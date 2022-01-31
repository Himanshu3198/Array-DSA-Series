class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        
         int maxsum=0;
        
          int n=accounts.size();
        for(int i=0;i<n;i++){ 
         int sum=  accumulate(accounts[i].begin(),accounts[i].end(),0); 
            maxsum=max(maxsum,sum);
             
        }
        
        return maxsum;
    }
};
