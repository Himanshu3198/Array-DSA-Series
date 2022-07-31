class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int n=nums.size();
        int res=0;
        sort(nums.begin(),nums.end());
        for(int op=1;op<=n;op++){
             bool flag=false;
             for(int i=0;i<n;i++){
                 if(nums[i]>0){
                     flag=true;
                     int k;
                     for(k=i+1;k<n;k++){
                         nums[k]-=nums[i];
                     }
                     nums[i]-=nums[i];
                     i=k;
                 } 
             }
            if(!flag) return res;
            res++;  
        }
        return res;
        
    }
};
