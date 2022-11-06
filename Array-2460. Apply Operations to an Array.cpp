class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
           
            int n=nums.size(),m=n-1,itr=0;
            while(m--){
                for(int i=0;i<n;i++){
                    
                    if(i+1<n && nums[i]==nums[i+1]){
                          nums[i]*=2;
                          nums[i+1]=0;
                    }
                }
            }
            vector<int>res(n,0);
            for(auto it:nums) if(it!=0) res[itr++]=it;
            return res;
          
    }
};
