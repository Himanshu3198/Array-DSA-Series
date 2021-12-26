class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        
         
        
        unordered_map<int,vector<int>>mp;
        
        
         int n=arr.size();
        vector<long long >res(n,0),prefix(n,0),suffix(n,0);
        
        for(int i=0;i<n;i++)
            mp[arr[i]].push_back(i);
        
        
        
        for(auto it:mp){
            
            
            vector<int> vec=it.second;
            
            
            for(int i=1;i<vec.size();i++){
                
                prefix[vec[i]]=prefix[vec[i-1]]+(long long)i*(long long)(vec[i]-vec[i-1]);
            }
        }
        
        for(auto &it:mp){
            
             vector<int>vec=it.second;
            
            
            for(int i=vec.size()-2;i>=0;i--){
                
                suffix[vec[i]]=suffix[vec[i+1]]+(long)(vec.size()-1-i)*(long long)(vec[i+1]-vec[i]);
            }
        }
        
        
        for(int i=0;i<n;i++){
            
            res[i]=prefix[i]+suffix[i];
        }
     
        return res;
    }
};
