class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        
        unordered_map<int,int>mp;
        set<int>st;
        for(auto it:nums) mp[it]++;
        
      
        int n=nums.size();
        int res=0;
        
          if(k==0){
            
              for(auto it:mp){
                  
                  if(it.second>1){
                      res++;
                  }
              }
              return res;
            
        }
        for(int i=0;i<n;i++){
            
            int x=nums[i]+k;
            if(st.find(x+nums[i])==st.end()){
            if(mp[x]){
                
                mp[x]--;
                res++;
                st.insert(x+nums[i]);
            } 
                
            }
           
        }
        
        return res;
    }
};
