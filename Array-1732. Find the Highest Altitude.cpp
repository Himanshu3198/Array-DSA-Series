class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
          
           int n=gain.size();
        vector<int>res(n+1);
        int sum=0;
        res[0]=0;
        for(int i=1;i<=n;i++){
            
              res[i]=res[i-1]+gain[i-1];
        }
        
        
        for(auto it:res){
            cout<<it<<" "<<"\n";
        }
        
        return *max_element(res.begin(),res.end());
    }
};
