class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
         int n=arr.size();
        int tmp=k;
        k--;
        int sum=0,k1=-1,ans=0;
        for(int i=0;i<n;i++){
            
            sum+=arr[i];
            k1++;
            if(k1==k){
                
                if(sum/tmp>=threshold){
                    ans++;
                    
                    
                }
                sum-=arr[i-k];
                k1--;
                
                
            }
                
        }
        
        return ans;
    }
};
