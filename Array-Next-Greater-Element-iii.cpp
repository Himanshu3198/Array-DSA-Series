class Solution {
public:
//         variation of next permutation
      /* 
         Algorithm
           1. find the greater element than last digit of string 
           2. find the just smaller digit than greater element 
           3. swap this two digits;
           4. And reverse all the digits after the greatest digit index we find in step 1*/
        bool nextPermutation(string &nums) {
        int n=nums.size();
            
            int i=n-1;
            
            while(i>0 and nums[i-1]>=nums[i]){
                
                i--;
                
            }
            
            if(i==0){
                
            
                return false;  
            } 
            
            
            int j=n-1;
            
            while(j>0 and nums[j]<=nums[i-1]) j--;
            
            swap(nums[j],nums[i-1]);
            
            reverse(nums.begin()+i,nums.end());
              
            return true;
    }
    int nextGreaterElement(int n) {
        
    
       string num = to_string(n);
        bool res = nextPermutation(num);
        size_t ans = stoll(num);
        return (!res || ans > INT_MAX) ? -1 : ans;
        
        
        
   
      
    }
};
