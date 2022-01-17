class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        
        
            
        
        
        
           int n=s.size();
        
            vector<string>nums;
            unordered_map<string,char>mp;
        
           stringstream str(s);
          
        
           string word;
        
          while(str>>word) nums.push_back(word);
        
        
        
           for(int i=0;i<n;i++){
               
                    string  str=nums[i];
                 if(mp.find(str)!=mp.end()){
                     
                     if(mp[str]!=pattern[i]) return false;
                 }
               
               if(mp.find(str)==mp.end()){
                   
                   mp[str]=pattern[i];
               }
               
                
           }
        return true;
        
        
    }
};
