class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int>res(nums.size());
        
          int i=0,j=nums.size()-1;
        for(auto it:nums){
            if(it%2==0){
                res[i++]=it;
            }
            else{
                res[j--]=it;
            }
              
        }
      
         return res;
        
      
    }
};
