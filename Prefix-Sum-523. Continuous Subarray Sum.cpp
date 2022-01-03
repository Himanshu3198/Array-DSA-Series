class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        
          int n=nums.size();
         set<int>set;
        int rem=0;
        
        if(n==1){
            return false;
        }
        int pre=0;
        for(int i=0;i<n;i++){
            
             rem=(rem+nums[i])%k;
            
            
            if(set.count(rem)==1){
                return true;
            }
            set.insert(pre);
            pre=rem;
           
        }
        
        return false;
     
    }
};
