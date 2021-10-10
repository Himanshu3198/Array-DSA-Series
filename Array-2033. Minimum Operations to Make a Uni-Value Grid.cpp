2033. Minimum Operations to Make a Uni-Value Grid

class Solution {
public:
    
    int minOperations(vector<vector<int>>& grid, int x) {
           int n=grid.size();
           int m=grid[0].size();
        
         
        vector<int>que;
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                que.push_back(grid[i][j]);
            }
        }
        
        sort(que.begin(),que.end());
        
        
        int mid=(que.size())/2;
        int target=que[mid];
         int count=0;
        
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                 if(abs(grid[i][j]-target)%x!=0){
                     return -1;
                 }
                
                count+=(abs(grid[i][j]-target)/x);
            }
    
        
        }
        
        
        
        
        
        return count;
     
        
        
    }
};
