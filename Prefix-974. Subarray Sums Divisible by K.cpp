class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        
        
          unordered_map<int,int>mp;
        
          int n=nums.size();
         int res=0,sum=0;
        mp[0]=1;
        
        for(int i=0;i<n;i++){
            
            
            sum=(sum+nums[i]);
            int rem=sum%k;
            
            if(rem<0){
                rem=rem+k;
            }
            
            auto it=mp.find(rem);
            if(it!=mp.end()){
                
                res+=it->second;
               it->second=it->second+1;
                
              
            }else{
                
                mp[rem]=1;
            }
        }
        
        return res;
    }
};
