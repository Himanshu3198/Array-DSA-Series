class Solution {
public:
    int smallestRepunitDivByK(int k) {
        
          if(k%2==0 or k%5==0){
                  return -1;       
          }
        
       
          
        long long int  curr=1;
        
        int len=1;
        while(curr%k!=0){
            
            
              curr=curr%k;
            curr=curr*10+1;
            len++;
            
        }
        
        return len;
        
        
        
        
    }
};
