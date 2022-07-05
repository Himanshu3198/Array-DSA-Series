class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<2) return n;
        int diff=nums[1]-nums[0],res=1,len=1;
        // for(auto it:nums) cout<<it<<" ";
        // cout<<"\n";
        for(int i=1;i<n;i++){
         if(nums[i]==nums[i-1]){
             continue;
         }
         int curr=nums[i-1]+1;
            if(curr==nums[i]){
                len++;
            }else{
                len=1;
            }
            res=max(res,len); 
      }
        return res;
    }
};
