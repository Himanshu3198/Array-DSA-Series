class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        
        
           vector<vector<int>>res;
            int n=nums1.size();
            int m=nums2.size();
           if(n==0 or m==0){
               
               return res;
           }
        
        
          int i=0,j=0;
        
         while(  i<n and j<m){
             
             
            int s1=nums1[i][0],e1=nums1[i][1];
             
            int s2=nums2[j][0],e2=nums2[j][1];
             
             
            if(s2<=e1 and s1<=e2){
                
                int val1=max(s1,s2);
                int val2=min(e1,e2);
                
                res.push_back({val1,val2});
            }
             
             if(e1>e2){
                 j++;
             }
             else{
                 i++;
             }
             
             
             
             
         }
        
        return res;
        
        
        
        
    }
};
