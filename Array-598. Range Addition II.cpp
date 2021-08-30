class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
     
          int minRow=m;
          int minCol=n;
        
        
        for(auto it:ops){
            
            minRow=min(minRow,it[0]);
            minCol=min(minCol,it[1]);
        }
        
        return minRow*minCol;
    }
};
