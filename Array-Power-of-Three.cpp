class Solution {
public:
    bool isPowerOfThree(int n) {
     
        
        for(long long int i=1;i<=n;i=i*3){
            
            if(i==n){
                return true;
            }
        }
        
        return false;
    }
};
