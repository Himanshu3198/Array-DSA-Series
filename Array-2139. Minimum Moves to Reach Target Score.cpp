class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        
        
        int count=0,x=1,temp;
        
        
        while(maxDoubles>0){
            
            
              if(target>2){
                temp=target;
                temp=temp/2;
                   if((target-temp*2)>0){
                       
                       
                  
                  count=count+(target-temp*2);
                       
              }
                  target=temp;
                  count++;
              }
          
            
            maxDoubles--;
             
            
        
            
        }
        
        if(target>0){
            
            count+=target-x;
            
        }
        
        return count;
    }
};
