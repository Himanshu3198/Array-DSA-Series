class Solution {
public:
    
      bool isValid(int &i,int &j,int n, char c){
          
          if(c=='R'){
              j=j+1;
          }else if(c=='L'){
              j=j-1;
          }else if(c=='U'){
              i=i-1;
          }else if(c=='D'){
              i=i+1;
          }
          
          if(i<0 or i>=n or j<0 or j>=n){
              return false;
          }
          
              return true;
          
          
          
      }
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        
        int size=s.size();
         int idx=0;
        
         vector<int>res;
        
        while(idx<size){
            
            int count=0;
              vector<int>currPos=startPos;
                 int i=currPos[0];
                 int j=currPos[1];
            
            for(int itr=idx;itr<s.size();itr++){
                
               
               if( isValid(i,j,n,s[itr])){
                   count++;
                   
               }else{
                   break;
               }
            }
            res.push_back(count);
            idx++;
            
        }
        
        return res;
    }
};
