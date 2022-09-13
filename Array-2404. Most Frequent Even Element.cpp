class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=INT_MAX,max_freq=0;
        for(auto &it:nums) {
            if(it%2==0){
                mp[it]++;
                max_freq=max(max_freq,mp[it]);
            }
        }
        for(auto &it:mp){
            if(it.second==max_freq){
                ans=min(ans,it.first);
            }
        }
        return ans==INT_MAX?-1:ans;
        
        
        
    }
};
