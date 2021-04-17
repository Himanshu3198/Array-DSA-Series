// 169. Majority Element


class Solution {
public:
    
     // Boyer-Moore Voting Algorithm
    int majorityElement(vector<int>& nums) {
         
        
        int count=1,n=nums.size();
        
        int major=nums[0];
        
        for(int i=1;i<n;i++){
            
            if(nums[i]==major){
                count++;
                
            }
            else{
                count--;
                if(count==0){
                    major=nums[i];
                    count=1;
                }
            }
        }
        
          return major;
         
    }
};
