class Solution {
public:
    
      bool isValid(vector<vector<int>>&prefix,int l,int r,int k){
     
           
          int odd=0;
            for(char c='a';c<='z';c++){
                
                odd+= (prefix[r][c-'a']- (l==0?0:prefix[l-1][c-'a']))%2;
                
            }
           
          
             return (odd-1<=2*k);
      }
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        
        
          int n=s.size();
        
          vector<vector<int>>prefix(n,vector<int>(26,0));
        
          prefix[0][s.front()-'a']++;
        
        for(int i=1;i<n;i++){
            
            for(int j=0;j<26;j++){
                
                prefix[i][j]=prefix[i-1][j];
            }
            
            
            prefix[i][s[i]-'a']++;
        }
        
           
        
          vector<bool>res(queries.size(),false);
        
        for(int i=0;i< queries.size();i++){
            
            int l=queries[i][0];
            int r=queries[i][1];
            int k=queries[i][2];
           if( isValid(prefix,l,r,k)){
               
               res[i]=true;
           }
        }
        
        return res;
        
    }
};
