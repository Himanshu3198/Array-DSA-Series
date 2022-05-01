class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
        int n=cards.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            
            mp[cards[i]].push_back(i);
        }
        
        int minG=INT_MAX;
        for(auto it:mp){
            
            vector<int>v=it.second;
            if(v.size()>1){
                
                for(int i=0;i<v.size()-1;i++){
                    int curr=v[i+1]-v[i]+1;
                    minG=min(minG,curr);
                }
            }
        }
        return minG==INT_MAX?-1:minG;
    }
};
