// 1876. Substrings of Size Three with Distinct Characters

class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        
        int i=0,j=2;
        
        
        while(j<s.size()){
            
            if(s[i]!=s[i+1] and s[i]!=s[j] and s[i+1]!=s[j]){
                count++;
            }
            
            i++,j++;
        }
        
        return count;
    }
};
