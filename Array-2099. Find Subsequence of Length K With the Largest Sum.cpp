class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
         if(nums.size()==k){
                  return nums;
              }
         
           vector<pair<int,int>>buffer;
        
        
        
           for(int i=0;i<nums.size();i++){
               
               buffer.push_back({nums[i],i});
           }
   
        sort(buffer.begin(),buffer.end());
              
         vector<int>res;
           set<int>set;
          int idx=nums.size()-k;
         while(k--){
             
             
          set.insert(buffer[idx++].second);
             
         }
        
        for(auto it:set){
            
            res.push_back(nums[it]);
        }
        return res;
        
        
        
    }
};
