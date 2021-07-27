// 41. First Missing Positive
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        
        
        /*  if current element is not equal to its index then swap it with it current element index but the conditon is current 
        element must be greater than 0 and less than
        equal to its size*/
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            while(nums[i]!=i+1){
                
                if(nums[i]>0 and nums[i]<=n and nums[i]!=nums[nums[i]-1]){
                    
                    swap(nums[i],nums[nums[i]-1]);
                }
                else{
                    break;
                }
                
            }
        }
        
        
        for(auto it:nums){
            cout<<it<<" ";
        }
        
        int res=n+1;
        
        for(int i=0;i<n;i++){
            
            if(nums[i]!=i+1){
                
                res=i+1;
                break;
            }
        }
        
        return res;
    }
};
