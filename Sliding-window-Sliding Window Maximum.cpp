class Solution {
public:

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        
        
          int n=nums.size();
        
          int start=0,end=0;
        
        
      
        
              stack<int> s;
    int nge[n];
      s.push(n-1);
    //   s.push(n-1);
      nge[n-1]=n;

    for (int i =n-2; i >= 0; i--)
    {
       while(s.size()>0 && nums[i]>=nums[s.top()]){
         s.pop();
       }

       if(s.size()==0){
           nge[i]=n;

       }
       else{
           nge[i]=s.top();
            //  nge[i]=arr[s.top()];
       }
       s.push(i);

    }
        // for(auto it:nge) cout<<it<<" ";
        
        
    
         vector<int>res;
        
         int j=0;
        for(int i=0;i<=n-k;i++){
            
            if(j<i){
                j=i;
            }
            
            while(nge[j]<i+k){
                j=nge[j];
            }
            res.push_back(nums[j]);
        }
        
          
        return res;
    }
};
