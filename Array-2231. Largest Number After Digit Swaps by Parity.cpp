class Solution {
public:
    int largestInteger(int num) {
        string e;
        string o;
        string s=to_string(num);
        for(char c:s){
            int x=c-'0';
            if(x%2==0){
                e.push_back(x+'0');
            }else{
                o.push_back(x+'0');
            }
        }
        sort(e.begin(),e.end(),greater<char>());
        sort(o.begin(),o.end(),greater<char>());
        int idx1=0,idx2=0;
        int n=e.size(),m=o.size();
        string ans="";
        for(char c:s){
            int x=c-'0';
            if(x%2==0){
                if(idx1<n){
                     ans+=(e[idx1]);
                     idx1++;
                }
            }else{
                if(idx2<m){
                     ans+=(o[idx2]);
                    idx2++;
                } 
            }
        }
        int res=stoi(ans);
        return res;
        
        
    
    }
};
