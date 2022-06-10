class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        unordered_map<char,int>mp;    
        int maxLen=1;
        int start=0,end=0,n=s.size();
        while(end<n){
          if(s[end]==' '){ end++;continue;}
		  // check if character already present in map
          if(mp.count(s[end])) start=max(start,mp[s[end]]+1); 
		  // update the length of answer 
          maxLen=max(maxLen,end-start+1);
		  //  update the index of current character in map
          mp[s[end]]=end;
          end++;
        }
        return maxLen;
    }
};
