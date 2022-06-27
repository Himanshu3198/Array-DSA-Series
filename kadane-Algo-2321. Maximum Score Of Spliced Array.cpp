#define ll long long int
class Solution {
public:
    
    int solve(vector<int>& nums1, vector<int>& nums2){
        int maxi=0,currSum=0,n=nums1.size(),sum=0;
        for(auto it:nums1)sum+=it;
        for(int i=0;i<n;i++){
            
            currSum+=(nums2[i]-nums1[i]);
            maxi=max(maxi,currSum);
            if(currSum<0) currSum=0;
        }
        return  sum+maxi;
        
    }
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
     
        return max(solve(nums1,nums2),solve(nums2,nums1));
    }
};
