class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        
        vector<vector<int>>res;
        if(numRows>=1) res.push_back({1});
        if(numRows>=2) res.push_back({1,1});
        vector<int>last={1,1};
        if(numRows<=2) return res;
        for(int n=3;n<=numRows;n++){
            vector<int>v(n,1);
            
            for(int i=0;i<v.size();i++){
                  if(i==0 || i==(v.size()-1)) continue;
                 v[i]=last[i]+last[i-1];
            }
            last=v;
            res.push_back(v);
        }
        return res;
    }
};
