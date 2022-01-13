class Solution {
public:
    int longestWPI(vector<int>& hours) {
         
         unordered_map<int,int>mp;
        
        int sum=0;
        int res=0;
        for(int i=0;i<hours.size();i++){
            
             sum+=hours[i]>8?1:-1;
            
            if(sum>0){
                res=i+1;
            }else{
                
                if(mp.find(sum-1)!=mp.end()){
                    res=max(res,i-mp[sum-1]);
                }
            }
            
             if(mp.find(sum)==mp.end()){
               mp[sum]=i; 
             }
            
        }
           
        return res;
    }
};
