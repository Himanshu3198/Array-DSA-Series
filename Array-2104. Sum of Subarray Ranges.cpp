class Solution {
public:
    #define ll long long int
    long long subArrayRanges(vector<int>& nums) {
        
        
        ll ans=0;
         int n=nums.size();
      
           int i=1,j=1;
           int maxele;
           int minele;
        
         for(int i=0;i<n;i++){
              maxele=nums[i],minele=nums[i];
             for(int j=i+1;j<n;j++){
                 
                 maxele=max(maxele,nums[j]);
                 minele=min(minele,nums[j]);
                 ans+=(maxele-minele);
             }
         }
        
        return ans;
       
    }
};
