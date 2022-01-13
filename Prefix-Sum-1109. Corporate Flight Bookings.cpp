class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& book, int n) {
     
        
        
        vector<int>ans(n+2,0);
        
        
        
        for(auto it:book){
            
            
             ans[it[0]]+=it[2];
             ans[it[1]+1]-=it[2];
        }
        
        for(int i=1;i<=n;i++){
            
            ans[i]+=ans[i-1];
        }
        
        return {ans.begin()+1,ans.end()-1};
    }
};
