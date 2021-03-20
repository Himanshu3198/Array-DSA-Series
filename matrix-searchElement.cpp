// 74. Search a 2D Matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
     
        
        int row=mat.size();
        int col=mat[0].size();
        bool found=false;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==target){
                    found=true;
                    break;
                }
            }
        }
        return found;
        
    }
};
