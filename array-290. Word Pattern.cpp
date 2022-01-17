class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        
           int n=pattern.size();
        
            vector<string>nums;
            unordered_map<char,string>mp;
            set<string>vis;
        
           stringstream str(s);
          
        
           string word;
        
          while(str>>word) nums.push_back(word);
        
        
              if(pattern.size()!=nums.size()) return false;
           for(int i=0;i<n;i++){
               
               
                 
                  if(mp.find(pattern[i])!=mp.end()){
                      
                        string str=nums[i];
                      if(mp[pattern[i]]!=str) {
                          return false;
                      }
                  }else{
                      
                      if(vis.count(nums[i])>0) {
                          return false;
                      }
                      
                      mp[pattern[i]]=nums[i];
                      vis.insert(nums[i]);
                  } 
           }
        
        return true;
        
        
    }
};
