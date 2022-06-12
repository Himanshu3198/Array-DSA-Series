
/* t.c n*log(n)
   the is to use two pointer approach the i-th pointer for starting point of
   subarray and j-th for ending point of subarray. when we encounter a repeated element
   we increament our i-th pointer to one index ahead of repating element and also subtract
   the element from current sum since it will no longer contributing to our answer and cal
   culating max sum at every point .
   */
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int sum=0,res=0;
        int i=0,j=0;
        while(j<n){
            sum+=nums[j];
            mp[nums[j]]++;
            while(mp[nums[j]]>1 && i<n){
                sum-=nums[i];
                mp[nums[i]]--;
                i++;
            } 
            res=max(res,sum);
             j++;
        }
        return res;
        
    }
};
