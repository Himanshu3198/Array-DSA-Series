#define ll long long int
class Solution {
public:
    
    int minimumAverageDifference(vector<int>& nums) {
        
           int n=nums.size();
           vector<ll>num(n);
           num[0]=nums[0];
          
           for(int i=1;i<n;i++){
               num[i]=num[i-1]+nums[i];
               
           }
           int differ=INT_MAX;
           int idx=n;
        
           for(int i=0;i<n;i++){
               
               ll first= num[i]/(i+1);
               ll second;
               if(i!=n-1){
               second=(num[n-1]-num[i])/(n-i-1);
               }else{
                   second=0;
               }
               ll dif=abs(first-second);
                if(dif<differ){
                    differ=dif;
                    idx=i;
                }
           }
        
        
          return idx;
    }
};
