 class Solution {
    public int maxSubArray(int[] nums) {
        
        /*
         noDel will track of all the element and oneDel will track of skiping one element if need 
         now at the second time delete OneDel will skip the current element and take rest array from 
         noDel  like case 1 [1,-2,4] oneDel = [1,4] noDel = [1,-2,4] 
         tc 2 [1,-2,-4,4]  oneDel = [1,-4,4] noDel = [1,-2,-4,4] at i=2 oneDel [1,-2,4]
         */
        int currSum = 0,ans=Integer.MIN_VALUE;
        if(nums.length ==1) return nums[0];
        for(int i=0;i<nums.length;i++){
            currSum+=(nums[i]);
            ans = Math.max(ans,currSum);
            if(currSum<0) currSum =0;
            
        }
        return ans;
        
    }
}
