class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        map<int,int>mp;
            
            for(auto it:nums){
                mp[it]++;
            }
            
        for(auto it:mp){
            
            
               if(it.second>1){
                   
                   int x=it.second;
                   
                   count+=(x*(x-1))/2;
               }
            }
        
         return count;
        }
       
    
};
