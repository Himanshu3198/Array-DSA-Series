class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        
        
             int i=0,j=plants.size()-1;
        
           int  tempA=capacityA,tempB=capacityB;
          int res=0;
          while(i<=j){
              
              if(i!=j){
                   if(tempA<plants[i]){
                       tempA=capacityA;
                       tempA-=plants[i];
                       res++;
                   }
                  else{
                      
                      tempA-=plants[i];
                  }
                  
                  if(tempB<plants[j]){
                      tempB=capacityB;
                      tempB-=plants[j];
                      res++;
                  }else{
                      tempB-=plants[j];
                  }
              }else{
                 
                    if(tempA==tempB){
                        if(tempA<plants[i]){
                               tempA=capacityA;
                             tempA-=plants[i];
                                res++;
                        }else{
                            tempB-=plants[i];
                        }
                        
                    }else if(tempA>tempB){
                          if(tempA<plants[i]){
                               tempA=capacityA;
                             tempA-=plants[i];
                                res++;
                        }else{
                            tempB-=plants[i];
                        }
                    }else{
                        
                          if(tempB<plants[j]){
                      tempB=capacityB;
                      tempB-=plants[j];
                      res++;
                  }else{
                      tempB-=plants[j];
                  }
                        
                    }
                  
              }
              i++;
              j--;
            
          }
        
        return res;
         
    }
};
