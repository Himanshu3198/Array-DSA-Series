class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        
        map<int,int>mp;
        set<int>st;
        
        
        for(auto it:nums1){
            
            if(st.count(it)==1){
                continue;
            }
            st.insert(it);
            mp[it]++;
        }
        
        st.clear();
        
             for(auto it:nums2){
            
            if(st.count(it)==1){
                continue;
            }
            st.insert(it);
            mp[it]++;
        }
        
           st.clear();
             for(auto it:nums3){
            
            if(st.count(it)==1){
                continue;
            }
            st.insert(it);
            mp[it]++;
        }
        
        vector<int>res;
        
        
        for(auto it:mp){
            
            
            if(it.second>=2){
                
                res.push_back(it.first);
            }
        }
         // sort(res.begin(),res.end());
        return res;
        
    
        
        
    }
};
