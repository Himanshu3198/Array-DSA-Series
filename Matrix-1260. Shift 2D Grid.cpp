class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {   
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>res(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){ 
                if((j+k>n)){
                    int x=(i+k)%n;
                    int y=j;
                    res[x][y]=grid[i][j];   
                }else{
                    int x=i;
                    int y=(j+k)%m;
                    res[x][y]=grid[i][j];
                }
            }
        }
        return res;
    }
};
