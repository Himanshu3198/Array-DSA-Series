// time & space complexity O(1)
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        
        
        vector<long long>res;
         
        
           
        long long ans=(num-3)/3;
        
        
        
            
            if((ans+ans+1+ans+2)==num)
               res={ans,ans+1,ans+2};
        
        
        
        
        
    
        return res;
    }
};
