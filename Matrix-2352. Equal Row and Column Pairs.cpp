class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        
        int n=grid.size();
        int m=grid[0].size();
        // unordered_map<vector<int>,int>mp;
        int res=0;
        for(int j=0;j<m;j++){
            vector<int>v;
            for(int i=0;i<n;i++){
                
                v.push_back(grid[i][j]);
            }
            // mp[v]++;
            for(int k=0;k<n;k++){
                if(grid[k]==v) res++;
            }
        }
        
        
//         for(int i=0;i<n;i++){
            
//             if(mp[grid[i]]) res+=mp[grid[i]];
//         }
        return res;
    }
};
