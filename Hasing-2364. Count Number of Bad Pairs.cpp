class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
        long long ans=0,eleSoFar=0,n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
           int goodPair=nums[i]-i;
           if(mp[goodPair]) ans+=(eleSoFar-mp[goodPair]);
           else ans+=eleSoFar;
           mp[goodPair]++;
           eleSoFar++;
        }
        return ans;
    }
};
