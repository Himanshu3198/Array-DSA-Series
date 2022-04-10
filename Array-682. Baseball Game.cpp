class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        vector<long long int>res;
        for(string s:ops){
            if(s=="+"){
                int n=res.size();
                res.push_back(res[n-1]+res[n-2]);
            }else if(s=="D"){
                int n=res.size();
                res.push_back(2*res[n-1]);
            }else if(s=="C"){
                res.pop_back();
            }else{
                res.push_back(stoll(s));
            }
        }
        int ans=0;
        for(auto it:res){
            ans+=it;
        }
        return ans;
    }
};
