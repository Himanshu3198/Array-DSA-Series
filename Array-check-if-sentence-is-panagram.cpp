class Solution {
public:
    bool checkIfPangram(string sen) {
        
        vector<int>freq(26,0);
        
        for(auto it:sen){
            
            freq[it-'a']=1;
        }
        
        for(auto it:freq){
            
            if(it==0){
                return false;
            }
        }
        return true;
    }
};
