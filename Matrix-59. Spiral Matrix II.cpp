class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
         vector<vector<int>>result;
         
        
          int number=1;
         
           int top=0,left=0;
           int bottom=n-1,right=n-1;
        
          while(number*number){
              
              
              for(int i=left;i<=right;i++){
                  
                  result[top][i]=number++;
              }
              top++;
              
              for(int i=top;i<=bottom;i++){
                  result[i][right]=number++;
              }
              right--;
              
              for(int i=right;i>=left;i--){
                  result[bottom][i]=number++;
              }
              bottom++;
              for(int i=bottom;i>=top;i--){
                  result[i][left]=number++;
                  left++;
              }
                 
          }
         return result;
    }
};
