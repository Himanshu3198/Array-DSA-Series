class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        
  
        int n=s.size();
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++) freq[s[i]-'a']++;
        vector<int>f(26,0);
        for(auto it:target){
            f[it-'a']++;
        } 
        int res=INT_MAX;
        for(int i=0;i<target.size();i++){
            
            res=min(res,freq[target[i]-'a']/f[target[i]-'a']);
        }
        
            return res;
        
        
    }
};
