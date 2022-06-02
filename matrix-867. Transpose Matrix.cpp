class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
     
         int n=mat.size();
        vector<vector<int>>res(mat[0].size(),vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<mat[i].size();j++) res[j][i]=mat[i][j];
        }
        return res;
    }
};
