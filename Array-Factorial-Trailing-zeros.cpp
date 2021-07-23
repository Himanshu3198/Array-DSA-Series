class Solution {
public:

    
    /* the idea is number of trailing zeros are depends upon  multiple of five   eg. 5  ,5/5=1 one traling zero
    is which factorial is 120   and 10 factorial is 3,628,800  as 10/5=2  two trailing zero*/
    int trailingZeroes(int n) {
     
        
 
        
        int count=0;
        
        while(n){
            
            n/=5;
            count+=n;
        }
    
        
        return count;
    }
};
