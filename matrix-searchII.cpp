// 240. Search a 2D Matrix II
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
       
        
         int row=mat.size()-1;
        int col=mat[0].size()-1;
        int i=0,j=col;
        
        while(i<=row && j>=0){
            
            if(mat[i][j]==target){
                
                return true;
            }
            
            else if(mat[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};
