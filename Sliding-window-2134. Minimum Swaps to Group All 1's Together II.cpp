class Solution {
public:
    int minSwaps(vector<int>& nums) {
        
        
        int res=INT_MAX;
        int n=nums.size();
        
          int k=0;
        for(auto &it:nums) if(it==1) k++;
        
         
        
        nums.insert(nums.end(),nums.begin(),nums.end());
        
        
        int i=0,j=0;
        int ones=0;
        
        while(j<2*n){
            
            ones+=(nums[j]==1);
            if((j-i+1)==k){
                
                res=min(res,k-ones);
                ones-=(nums[i]==1);
                i++;
                
                
            }
            j++;
        }
          
        
         
         return res==INT_MAX?0:res;
        
        
    }
};
