class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
        
    
        
        vector<vector<int>>res;
        

        for(int i=0;i<n-3;i++){
            
            
             int target1=target-nums[i];
            for(int j=i+1;j<n-2;j++){
                
                int target2=target1-nums[j];
              int low=j+1;
                int high=n-1;
                
                
               while(low<high){
                   
                   
                  int  sum=nums[low]+nums[high];
                   
                   
                   if(sum==target2){
                       
                       vector<int>ans;
                       ans.push_back(nums[i]);
                        ans.push_back(nums[j]);
                        ans.push_back(nums[low]);
                        ans.push_back(nums[high]);
                       
                       res.push_back(ans);
                       
                        while(low<high and nums[low]==ans[2]) low++;
                        while(high>low and nums[high]==ans[3]) high--;
                   }
                   
                   else if(sum<target2){
                       low++;
                   }
                   else{
                       high--;
                   }
               }
                
                while(j+1<n and  nums[j+1]==nums[j]) j++;
                
                
            }
             while(i+1<n and  nums[i+1]==nums[i]) i++;
            
            
        }
        
        return res;
    }
};
