class Solution {
public:
    long long minimumRemoval(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        sort(nums.begin(),nums.end());
        long long res=LONG_LONG_MAX;
        long long sum=accumulate(nums.begin(),nums.end(),(long long)0);
        for(int i=0;i<n;i++){
            
            long long ans=sum-(long long)(nums[i])*(n-i);
            res=min(res,ans);
        }
        return res;
    }
};
