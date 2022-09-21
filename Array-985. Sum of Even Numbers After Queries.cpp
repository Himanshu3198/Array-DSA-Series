class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
         
        int n=nums.size();
        vector<int>res;
        long long sum=0;
        for(auto &it:nums)
            if(it%2==0)sum+=it;
        
        for(auto &it:queries){

            int val=it[0],idx=it[1];
            int prev=nums[idx];
             nums[idx]+=val;
            if(prev&1){
                if(nums[idx]%2==0)
                    sum+=nums[idx];  
            }else{
                if(nums[idx]%2==0)
                    sum+=val;
                else
                    sum-=prev;
            }
            res.push_back(sum);
        }
        return res;
         
    }
};
