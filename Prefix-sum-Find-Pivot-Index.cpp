class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        
        /* the idea is to compute left sum and right sum then check for every curr sum if 
            curr sum is equal to left sum -right sum then return its index*/
        
        
        int n=nums.size();
        
     
        
           int right_sum=0;
        for(int i=n-1;i>=0;i--){
            
            right_sum+=nums[i];
           
            
        }
        
         
         int curr,left_sum=0;
        
        
        for(int i=0;i<n;i++){
            
             curr=left_sum;
            
            left_sum+=nums[i];
            
            if(curr==(right_sum-left_sum)){
                
                return i;
            }
            
        }
     
        
        return -1;
    }
};
