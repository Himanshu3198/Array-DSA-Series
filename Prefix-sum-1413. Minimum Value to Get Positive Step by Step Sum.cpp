class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        
            int n=nums.size();
        
               vector<int>pre(n);
        
        
                pre[0]=nums[0];
        
               for(int i=1;i<n;i++){
                   
                   pre[i]=pre[i-1]+nums[i];
               }
        
             for(auto it:pre) cout<<it<<" ";
               cout<<"\n";
        
        
           int minval=*min_element(pre.begin(),pre.end());
          if(minval>0){
              return 1;
          }
          else{
              return -minval+1;
          }
             int startVal=1;
        
//         *******************************brute force **********************************
        int ans=0;
        int temp=startVal;
        while(1){ 
             int i;
            for( i=0;i<n;i++){
                  if(temp<=0){
                      break;
                  }
                temp+=nums[i];
            }
            
            if(temp<=0){
                
                startVal++;
                temp=startVal;
            }
            else if(temp>0){
                
                break;
            }
        }
        
        return startVal;
        
        
    }
};
