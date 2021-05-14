// 162. Find Peak Element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       
        int high=nums.size()-1;
        int low=0;
        
        
        while(low<high){
            
            
            int mid1=(low+high)/2;
              int mid2=mid1+1;
            
            if(nums[mid1]<nums[mid2]){
                
                low=mid2;
            }
            else{
                
                high=mid1;
            }
        }
        
        return low;
    }
};
