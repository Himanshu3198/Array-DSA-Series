class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        
        
        int res=0;
        
          unordered_map<int,int>mp;
        
//               a+b+c+d=0 a+b=-(c+d);
        
        
           for(int i=0;i<nums1.size();i++){
               
               for(int j=0;j<nums2.size();j++){
                   
                   int x=nums1[i]+nums2[j];
                   mp[x]++;
               }
           }
        
        
        for(int i=0;i<nums3.size();i++){
            
            for(int j=0;j<nums4.size();j++){
                
                int x=nums3[i]+nums4[j];
                
                if(mp.find(-1*x)!=mp.end()){
                    res+=mp[-1*x];
                }
            }
        }
        
        return res;
    }
};
