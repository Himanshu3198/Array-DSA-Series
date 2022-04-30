class Solution {
public:
    int solve(int num){
        
        int x=0;
        while(num>0){
            x=x*10+num%10;
            num/=10;
        }
        return x;
    }
    int countNicePairs(vector<int>& nums) {
     
         int n=nums.size();
          vector<int>revNums(n);
          for(int i=0;i<n;i++){
              revNums[i]=solve(nums[i]);
          }
          
          int result=0;
          set<pair<int,int>>incPairs;
          for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                  if(i==j) continue;
                   if(!incPairs.count({nums[i],nums[j]})){
                       if((nums[i]+revNums[j])==(revNums[i]+nums[j])){
                            incPairs.insert({nums[i],nums[j]});
                            incPairs.insert({nums[j],nums[i]});
                            result++;
                        }
                     }
              }
          }
        
        return result;
        
    }
};
