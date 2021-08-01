// 189. Rotate Array

class Solution {
public:
    
    /*the idea is to apply reversing of array in 3 steps
      step 1 reverse from 0 n-k-1
      step 2 reverse from n-k to n-1
      step 3 reverse the whole array 0 to n-1*/
    
     void reverse(vector<int>&nums,int low,int high){
         
         while(low<high){
             
             int temp=nums[low];
             
             nums[low]=nums[high];
             nums[high]=temp;
             
             low++;
             high--;
             
         }
     }
       
    void rotate(vector<int>& nums, int k) {
        
            int n=nums.size();
        k=k%n;
        
        
        reverse(nums,0,n-k-1);
        
        reverse(nums,n-k,n-1);
        
        reverse(nums,0,n-1);
   
    }
};
