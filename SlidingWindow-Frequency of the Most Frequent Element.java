class Solution {
    public int maxFrequency(int[] nums, int k) {
        
        int left=0,ans=1,n=nums.length;
        long sum=0;
        Arrays.sort(nums);
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while ((long) nums[right] * (right - left + 1) - sum > k) {
                sum -= nums[left];
                left++;
            }
             ans = Math.max(ans,right-left+1);
        }
        return ans;
    }
}
