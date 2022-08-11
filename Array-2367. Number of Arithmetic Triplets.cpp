class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int res=0,n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    
                    int x=nums[j]-nums[i],y=nums[k]-nums[j];
                    res+=(x==y && y==diff);
                }
            }
        }
        return res;
    }
};
