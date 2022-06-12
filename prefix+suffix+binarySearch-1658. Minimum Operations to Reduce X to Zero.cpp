class Solution {
public:
    
//       t.c O(n*log(n))
//          s.c O(2n)
  
    int minOperations(vector<int>& nums, int x) {
        
          int n=nums.size();
          vector<int>prefix(n,0),suffix(n,0);
          prefix[0]=nums[0];
        
          for(int i=1;i<n;i++) prefix[i]=prefix[i-1]+nums[i];
          suffix[n-1]=nums[n-1];
          for(int i=n-2;i>=0;i--) suffix[i]=suffix[i+1]+nums[i];
          // for(auto it:prefix) cout<<it<< " "; cout<<"\n";
          // for(auto it:suffix) cout<<it<< " "; cout<<"\n";
          int ans=INT_MAX;
          //case 1
          int low=0,high=n-1;
          while(low<=high){
              
              int mid=(low+high)/2;
              
              if(prefix[mid]==x){
                  ans=min(ans,mid+1);
                  break;
              }
              if(prefix[mid]>x) high=mid-1;
              else low=mid+1;
          }
          // case 2
          low=0,high=n-1;
          while(low<=high){
              
              int mid=(low+high)/2;
              if(suffix[mid]==x){
                  ans=min(ans,n-mid);
                  break;
              }
              if(suffix[mid]>x) low=mid+1;
              else high=mid-1;
          }
          // case 3
         for(int i=0;i<n;i++){
             
             if(prefix[i]>x) break;
             low=0,high=n-1;
             int remain=x-prefix[i];
             while(low<=high){
                 
                 int mid=(low+high)/2;
                 if(i<mid && suffix[mid]==remain){
                     ans=min(ans,i+1+n-mid);
                     break;
                 }
                 if(suffix[mid]>remain) low=mid+1;
                 else high=mid-1;
             }
         }
    
        if(ans==INT_MAX) return -1;
        return ans;
  
    }
};
