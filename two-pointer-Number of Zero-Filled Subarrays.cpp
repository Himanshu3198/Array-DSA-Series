class Solution {
public:
    long long zeroFilledSubarray(vector<int>& a) {
        
        long long ans=0;
        
        int i=0,n=a.size();
        while(i<n){
            
            if(a[i]!=0){
                i++;
            }
            int j=i;
            long long count=0;
            while(j<n && a[j]==0){
                 j++;
                 count++;
            } 
            ans+=((long long)(count*(count+1))/2);
            i=j;
        }
        return ans;
    }
};
