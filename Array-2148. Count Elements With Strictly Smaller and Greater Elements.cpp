class Solution {
public:
    int countElements(vector<int>& nums) {
     
        
        int n=nums.size();
        
        // sort(nums.begin(),nums.end());
        
        bool flag1=false,flag2=false;
          int res=0;
        for(int i=0;i<n;i++){
            
           
                flag1=false;
                flag2=false;
            for(int j=0;j<n;j++){
                 if(i==j) continue;
              
                if(flag1 and flag2) break;
                
                
                if(nums[i]>nums[j]) flag1=true;
                
                if(nums[i]<nums[j]) flag2=true;
            }
            
            if(flag1 and flag2) res++;
            
        }
        
        return res;
        
    }
};
