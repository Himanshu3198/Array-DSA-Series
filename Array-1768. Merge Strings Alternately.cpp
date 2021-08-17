// 1768. Merge Strings Alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        
          int i=0,j=0;
        
          int n=word1.length();
          int m=word2.length();
        
         while(i<n and j<m){
             
             ans.push_back(word1[i++]);
             ans.push_back(word2[j++]);
         }
        
        while(i<n){
            
            ans.push_back(word1[i++]);
        }
           while(j<m){
            
            ans.push_back(word2[j++]);
        }
        
        return ans;
        
        
    }
};
