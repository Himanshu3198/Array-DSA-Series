class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int first,second;
        map<int,int>mp;
        for(auto v:nums) mp[v]++;
        for(int i=1;i<=nums.size();i++){
            if(!mp[i]) second=i;
            if(mp[i]==2) first=i;
        }
        return {first,second};
    }
};
