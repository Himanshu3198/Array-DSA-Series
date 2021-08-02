// 209. Minimum Size Subarray Sum

class Solution {
public:
    
    /* In this question we have to find minimum subarray whose sum is greater than
    or equal to target  we can apply here sliding window technique
    what we gona do is to keep adding current element until it less than target 
    when it become greater than or equal to target we calculate the current window 
    size   after that start subtracting element from start and if size become less than target
    we will add new element on particular window and check its size wheater is less than  previous window size 
    and keep  subtracting the  elements from the back of the window  repeat this  unitl we traverse the whole array*/
    int minSubArrayLen(int target, vector<int>& nums) {
        
         
        int start=0,sum=0;
        
        int mini=INT_MAX;
        
        
        for(int i=0;i<nums.size();i++){
            
            sum+=nums[i];
            
            while(sum>=target){
                
                mini=min(mini,i-start+1);
                
                sum-=nums[start];
                start++;
            }
        }
        
        return mini==INT_MAX?0:mini;
        
        
    }
};
