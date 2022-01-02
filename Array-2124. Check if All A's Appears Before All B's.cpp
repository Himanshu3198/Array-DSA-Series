class Solution {
public:
    bool checkString(string s) {
     
        
         int idx=lower_bound(s.begin(),s.end(),'b')-s.begin();
        
         int n=s.size();
          bool b_pre=false;
           
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='b') b_pre=true;
            if(b_pre){
             
                 if(s[i]=='a') return false;
            }
            
        
        }
        return true;
    }
};
