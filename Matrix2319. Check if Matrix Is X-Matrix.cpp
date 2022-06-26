class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {

            int n=grid.size();
            for(int i=0;i<n;i++){
                if(grid[i][i]==0) return false;
                   grid[i][i]=-1;
            }
            for(int i=0,j=n-1;j>=0,i<n;i++,j--){
            
                if(grid[i][j]==0) return false;
                   grid[i][j]=-1;
            }
        
            for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                
                if(grid[i][j]==-1) continue;
                if(grid[i][j]!=0) return false;
            }
        }
        return true;
            
           
    }
};
