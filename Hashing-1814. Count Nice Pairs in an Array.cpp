/* Approach
nums[i]+reverseNums[j]=reverseNums[i]+nums[j]
we can write it as nums[i]-reverseNums[i]=nums[j]-reverseNums[j]
and store its frequencey in hashmap when we found again then increment result by current frequency.

Time Compleixty O(NumLen*n)
Space complexity O(n) 
*/

class Solution {
public:
    int reverseNum(int num){
        int x=0;
        while(num>0){
            x=x*10+num%10;
            num/=10;
        }
        return x;
    }
    int countNicePairs(vector<int>& nums) {
          int n=nums.size();
          const int mod=1e9+7;
          unordered_map<int,int>incPairs;
          int result=0;
          for(int i=0;i<n;i++){
              int  revNums=reverseNum(nums[i]);
              int validPairs=(nums[i]-revNums);
              if(incPairs.count(validPairs)){
                  result+=incPairs[validPairs];
                  result%=mod;   
              }
              incPairs[validPairs]++;    
          }
        return result;   
    }
};
