class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n=position.size();
        
          vector<int>cnt(2,0);
        
         for(int i=0;i<n;i++){
             
          if(position[i]%2==0){
              cnt[0]++;
          } else{
              cnt[1]++;
          }   
            
         }
        
        return min(cnt[0],cnt[1]);
    }
};
