class Solution {
public:
    int minSteps(string s, string t) {
        
    
    
        
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        
        for(char c:s){
            
            mp1[c]++;
        }
         
        for(char c:t){
            
            mp2[c]++;
        }
        
        
        int res=0;
        
       
              for(auto &it:mp1){
            
            if(mp2.find(it.first)==mp2.end()){
                
                
                res+=it.second;
            }else{
                  auto itr=mp2.find(it.first);
                res+=(abs(it.second-itr->second));
            }
       
        }
              for(auto &it:mp2){
            
            if(mp1.find(it.first)==mp1.end()){
                res+=it.second;
            }
            
        }
        

        
        
        return res;
    }
};
