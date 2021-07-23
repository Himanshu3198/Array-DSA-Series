// 73. Set Matrix Zeroes

class Solution {
public:
         int  my_val=10e5+7;
    void dfs(vector<vector<int>>&mat,int i,int j,int n,int m){
    
        
        for(int k=0;k<m;k++){
            
            if(mat[i][k]!=0  and mat[i][k]!=my_val){
                mat[i][k]=0;
            }
            
        }
        
        for(int k=0;k<n;k++){
            
            if(mat[k][j]!=0 and mat[k][j]!=my_val){
                mat[k][j]=0;
            }
            
        }
        
        
        
        
    }
    void setZeroes(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
     
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                if(mat[i][j]==0){
                    mat[i][j]=my_val;
                  
                }
            }
        }
        
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                if(mat[i][j]==my_val){
                    mat[i][j]=0;
                    dfs(mat,i,j,n,m);
                  
                }
            }
        }
         
        
        
        
        return;
    }
};
