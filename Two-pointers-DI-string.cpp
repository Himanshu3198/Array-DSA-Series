// 942. DI String Match

class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        
        int len=s.length();
        
         int low=0,high=len;
         int i=0;
         vector<int>res;
         while(i<len){
             
             if(s[i]=='I'){
                 
                 res.push_back(low);
                 low++;
             }
             else{
                 
                 res.push_back(high);
                 high--;
             }
             
             i++;
             
         }
        
        res.push_back(high);
        
        return res;
    }
};
