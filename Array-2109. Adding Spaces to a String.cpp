class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
         string res="";
        
          int idx=0;
        
          for(int i=0;i<s.size();i++){
              
              if(idx<spaces.size() and spaces[idx]==i){
                  res+=' ';
                  idx++;
              }
              res+=s[i];
          }
        
        return res;
    }
};
