// 152. Maximum Product Subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
  int mmin=nums[0],mmax=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0) swap(mmin,mmax);
            mmax = max(nums[i],mmax*nums[i]);
            mmin = min(nums[i],mmin*nums[i]);
            ans=max(ans,mmax);
        }
        return ans;
        
    }
};
