class Solution {
public:
    int missingNumber(vector<int>& nums) {
         
         // sum of natural number
             // 1+2+3+n=n*(n+1)/2          
           int n=nums.size();
           int sumOfN=n*(n+1)/2;
           int sum=0;
           for(auto it:nums) sum+=it;
           return sumOfN-sum;
    }
};
