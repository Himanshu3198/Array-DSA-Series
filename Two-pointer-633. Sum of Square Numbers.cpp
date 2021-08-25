// 633. Sum of Square Numbers

class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int n=floor(sqrt(c));
        
        if(c==1){
            return true;
        }
     
        
        vector<long long int>nums;
        
        for(int i=0;i<=n;i++){
            
            nums.push_back(i);
        }
        
        long long int low=0,high=nums.size()-1;
        
        
        while(low<=high){
            
            long long int sum=nums[low]*nums[low]+nums[high]*nums[high];
            
            if(sum==c){
                return true;
            }
            if(sum<c){
                low++;
            }
            else{
                high--;
            }
        }
        
        return false;
        
    }
    
};
