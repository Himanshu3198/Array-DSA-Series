class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        
        int n=bank.size();
        
         int lasers=0;
        
         int res=0;
        
          for(int i=0;i<n;i++){
              
              string curr=bank[i];
               int ones=0;
              for(auto s:curr){
                  if(s=='1') ones++;
              }
              
              if(ones>0){
                  
                  res+=(lasers*ones);
                  lasers=ones;
              }
          
          
          }
        
        return res;
    }
};
