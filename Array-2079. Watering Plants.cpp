class Solution {
public:
    int wateringPlants(vector<int>& nums, int capacity) {
        
        int steps=0;
          int temp=capacity;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            
            
            if(nums[i]<=temp){
                
               
                ans+=1;
                temp-=nums[i];
            }
            else{
                
                 temp=capacity;
               
                ans+=(steps+steps+1);
                temp-=nums[i];
            }
            steps++;
        }
        return ans;
        
    }
};
