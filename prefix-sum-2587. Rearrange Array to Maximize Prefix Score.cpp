class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        long long int sum=0;
        int count=0;
        for(auto it:nums){
            sum+=it;
            if(sum<=0) return count;
            count++;
        }
        return count;
    }
};
