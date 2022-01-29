class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        
        unordered_map<int,int>mp;
        
        
          int odd=0;
          int n=nums.size();
          int res=0;
        for(int i=0;i<n;i++){
            
            if(nums[i]%2){
                odd++;
            }
            
            
            if(odd==k){
                res++;
            } if(mp.find(odd-k)!=mp.end()){
                
                res+=mp[odd-k];
            }
            
            mp[odd]++;
        }
        
        
        for(auto it:mp){
            
            cout<<it.first<<" "<<it.second<<"\n";
        }
        
        return res;
    }
};
