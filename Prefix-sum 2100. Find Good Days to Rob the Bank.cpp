class Solution {
public:
    
     /* simple observation is that all element before the current element and after the 
       current  should be equal or greater .we can keep track of this using prefix and
       suffix array prefix array store the number of element greater or equal current element
        from left while suffix array store the number of element greater or equal than current 
        element from right */
    
    vector<int> goodDaysToRobBank(vector<int>& nums, int time) {
        
                 int n=nums.size();
        
              vector<int>prefix(n,0);
              vector<int>suffix(n,0);
        
              int count=0;
        
            for(int i=1;i<n;i++){
                
                 if(nums[i]<=nums[i-1]){
                     
                     count++;
                     prefix[i]=count;
                 }else{
                     count=0;
                 }
            }
        
           count=0;
        
           for(int i=n-2;i>=0;i--){
               
               if(nums[i]<=nums[i+1]){
                    count++;
                   suffix[i]=count;
               }else{
                   count=0;
               }
           }
        
             vector<int>res;
            for(int i=0;i<n;i++){
                
                if(prefix[i]>=time and suffix[i]>=time){
                    res.push_back(i);
                }
            }
        
           return res;
    }
};
