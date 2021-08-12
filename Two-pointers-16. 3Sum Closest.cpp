// 16. 3Sum Closest

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
         int ans;
        int n=nums.size();
           ans=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        
     
        
      
        for(int i=0;i<n-2;i++){
            
            int low=i+1,high=n-1,sum;
            
            while(low<high){
                
                 sum=nums[i]+nums[low]+nums[high];
                
                 if(sum==target){
                     return sum;
                 }
                if(sum<target){
                    
                    low++;
                }
                else{
                    high--;
                }
                
                 if(abs(sum-target)<abs(target-ans)){
                     
                     ans=sum;
                 }
                
            }
            
            
            
        }
        
        return ans;
    }
};
