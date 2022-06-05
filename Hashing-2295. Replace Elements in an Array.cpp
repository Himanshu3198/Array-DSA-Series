class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        
        
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            
            mp[nums[i]]=i;
        } 
        for(auto it:op){
            
            int key=it[0];
            int value=it[1];
            
            int idx=mp[key];
            nums[idx]=value;
            mp[value]=idx;
        }
        return nums;
        
    }
};
