class Solution {
public:
    bool canConstruct(string nums, string magazine) {
        
        
         map<char,int>mp;
        
          for(char c:magazine){
              
              
              mp[c]++;
          }
        
           int n=nums.size();
        for(int  i=0;i<n;i++){
            
            if(mp[nums[i]]){
                mp[nums[i]]--;
            }
            else{
                return false;
            }
        }
        
        return true;
    }
};
