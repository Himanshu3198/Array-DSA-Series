class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
      
             sort(arr.begin(),arr.end());
          
             int min_diff=INT_MAX;
        
               unordered_map<int,vector<pair<int,int>>>mp;
        
            int n=arr.size();
         for(int  i=1;i<n;i++){
             
              int curr_diff=abs(arr[i]-arr[i-1]);
             mp[curr_diff].push_back({arr[i-1],arr[i]});
                min_diff=min(min_diff,curr_diff);
         }
                               
              vector<vector<int>>res;
                              
                             
             for(auto it:mp[min_diff]){
                                 
                res.push_back({it.first,it.second});
                                 
            }
                                 
             return res;
        
        
    }
};
