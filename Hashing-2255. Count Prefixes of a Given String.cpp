class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string,int>mp;
        for(auto it:words){
            
            mp[it]++;
        }
        int res=0,n=s.size();
        string curr="";
        for(int i=0;i<n;i++){
            curr+=s[i];
            if(mp.count(curr)){
                res+=mp[curr];
            }
        
       }
       return res;     
    }
};
