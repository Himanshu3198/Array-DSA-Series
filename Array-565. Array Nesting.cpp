class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        
        
        
        int n=nums.size();
        int curr,prev;
        
        int maxCount=1;
        int count=1;
        
        for(int i=0;i<n;i++){
            
            
            if(nums[i]==-1) continue;
            count=1;
            
            int curr=nums[i];
              nums[i]=-1;
            
            while(nums[curr]!=-1){
                
                prev=curr;
                curr=nums[curr];
                nums[prev]=-1;
                count++;
            }
            
            maxCount=max(maxCount,count);
        }
        
        return maxCount;
        
     
        
        
        
    }
};
