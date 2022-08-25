class Solution {
public:
    bool canConstruct(string nums, string magazine) {
        
        
          map<char,int>mp;
          for(char c:magazine) mp[c]++;
          for(int  i=0;i<nums.size();i++){
            if(mp[nums[i]])  mp[nums[i]]--;
            else return false;
          }
          return true;
    }
};
