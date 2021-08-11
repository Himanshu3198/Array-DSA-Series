// 187. Repeated DNA Sequences

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
     
        
        map<string,int>mp;
        
        vector<string>ans;
        
        
        int i=0;
        
        
        while(i+9<s.length()){
            
              string res=s.substr(i,10);
              i++;
            mp[res]++;
               
            
            if(mp[res]==2) ans.push_back(res);
            
         
        }
        return ans;
    }
};
