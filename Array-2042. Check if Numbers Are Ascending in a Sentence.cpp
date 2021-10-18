2042. Check if Numbers Are Ascending in a Sentence
class Solution {
public:
    bool areNumbersAscending(string s) {
        int lastnum=-1;
        
        for(int i=0;i<s.length();i++){
                        
            
            if(isdigit(s[i])){
                
                int curr=0;
                while(isdigit(s[i])){
                   
                    
                    curr=curr*10+(s[i]-'0');
                    i++;
                    
                }
                
                if(curr<=lastnum) return false;
                
                lastnum=curr;
            }
        }
        
        return true;
    }
};
