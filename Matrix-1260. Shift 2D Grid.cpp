//  time complexity O(n*m)
//  space complexity O(n*m)
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {   
        int n=grid.size();
        int m=grid[0].size();
   
        vector<int>res;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res.push_back(grid[i][j]);
            }
        }
        int total=n*m;
        k=k%total;
        if(k==0) return grid;
        int idx=total-k;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=res[idx];
                idx=(idx+1)%total;
            }
        }
        return grid;
        
        
    }
};
