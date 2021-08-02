// 219. Contains Duplicate II

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        
        unordered_map<int,int>mp;
        
        
        for(int i=0;i<nums.size();i++){
            
            auto it=mp.find(nums[i]);
            
            
           if(it!=mp.end()){
               
               int diff=abs(it->second-i);
               
               if(diff<=k){
                   return true;
               }
               else{
                   
                   mp[nums[i]]=i;
               }
           }
            
            else{
                
                mp[nums[i]]=i;
            }
            
            
        }
        
        return false;
    }
};
