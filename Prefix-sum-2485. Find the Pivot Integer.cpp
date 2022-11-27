class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        vector<int>prefix(n+1,0);
        prefix[1]=1;
        for(int i=2;i<=n;i++)
            prefix[i]=prefix[i-1]+i;
        for(int i=1;i<=n;i++){
            int x=prefix[i]-prefix[i-1];
            int y=prefix[n]-prefix[i]+x;
            if(prefix[i]==y) return x;
        }
        // for(auto it:prefix) cout<<it<<" ";
        return -1;
        
        
        
        
    }
};
