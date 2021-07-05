
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
        
         vector<int>res;
        
        
        int n=nums.size();
        int start=0,end=n-1;
        
        
        while(start<=end){
            
            int sum=nums[start]+nums[end];
            if(sum==target){
                
                res.push_back(start+1);
                res.push_back(end+1);
                 break;
                
            }
            else if(sum<target){
                start++;
            }
            else{
                end--;
            }
        }
        
        return res;
    }
};
