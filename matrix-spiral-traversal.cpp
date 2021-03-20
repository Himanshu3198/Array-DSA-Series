class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
              vector<int>v;
          int top=0;
          int bottom=mat.size()-1;
          int left=0;
          int right=mat[0].size()-1;
          int dir=0;
          int i;
          while(top<=bottom && left<=right){
              
              if(dir==0){
                  for(i=left;i<=right;i++){
                      v.push_back(mat[top][i]);
                      
                  }
                  top++;
              }
              
              if(dir==1){
                  for(i=top;i<=bottom;i++){
                      v.push_back(mat[i][right]);
                  }
                  right--;
              }
              if(dir==2){
                  for(i=right;i>=left;i--){
                      v.push_back(mat[bottom][i]);
                  }
                  bottom--;
              }
              if(dir==3){
                  
                  for( i=bottom;i>=top;i--){
                      v.push_back(mat[i][left]);
                  }
                  left++;
              }
              dir=(dir+1)%4;
          }
          return v;
    }
};
