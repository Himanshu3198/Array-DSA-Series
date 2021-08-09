class Solution {
public:
    int subtractProductAndSum(int n) {
        
        vector<int>res;
        
        
        while(n){
            
            int x=n%10;
            res.push_back(x);
            n/=10;
        }
        
        int sum=0,prod=1;
        for(auto it:res){
            cout<<it<<" ";
            sum+=it;
            prod*=it;
        }
        
        
        return (prod-sum);
    }
};
