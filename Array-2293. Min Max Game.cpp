class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        
        int n=nums.size();
        if(n==1) return nums[0];
        bool flag=true;
        while(n>1){
            flag=true;
            vector<int>v;
            for(int i=0;i<nums.size();i+=2){
                if(flag){
                    if(i+1<nums.size()){
                        
                        int ans=min(nums[i],nums[i+1]);
                        v.push_back(ans);
                        
                    }
                    flag=false;
                }else{
                       if(i+1<nums.size()){
                        
                        int ans=max(nums[i],nums[i+1]);
                        v.push_back(ans);
                        
                    }
                    flag=true;
                    
                }    
            }
            
            n/=2;
            nums=v;
        }
        return nums[0];
        
    }
};
