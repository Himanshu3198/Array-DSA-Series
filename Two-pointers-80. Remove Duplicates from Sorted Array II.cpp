class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
    
        
        int n=nums.size();
        
         
         if(n<3) return n;
        
        
          int p1=2,p2=2;
        
        
        while(p2<n){
            
            
            if(nums[p2]!=nums[p1-2]){
                nums[p1]=nums[p2];
                p1++;
            }
            p2++;
        }
        
        return p1;
    }
};
