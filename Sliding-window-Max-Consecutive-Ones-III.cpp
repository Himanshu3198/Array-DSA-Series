// 1004. Max Consecutive Ones III

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     
        /* sliding window technique 
           basically we shift the window on the basis of zeros if the numbers of
           zeros become greater than k than we shift the current window to 
            index at which next  zero is present  and we update the window size in 
            every iteration*/
        
          
    
           int j=0;
        int res=0;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==0) k--;   // decreasing k till it is greater than 0
            
            if(k<0){
                if(nums[j]==0) k++;    // increasing k until it is greater than  0
                
                j++;
            }
            res=max(res,i-j+1);
        }
        
        return res;
        
        
        
        
    }
};

// java code 

class Solution {
    public int longestOnes(int[] nums, int k) {
        
        int left = 0;
        int ans = 0;
        int n = nums.length;

        for(int right = 0;right<n;right++){

            if(nums[right] == 0) k--;

            while(k < 0){

                if(nums[left] == 0) k++;
                left++;
            }
            ans = Math.max(ans,right-left+1);
        }

        return ans;
    }
}
