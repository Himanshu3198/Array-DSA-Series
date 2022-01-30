class Solution {
    
   
public:
   
    vector<int> maxScoreIndices(vector<int>& nums) {
        
        
         int n=nums.size();
           vector<vector<int>>count(n,vector<int>(2,0));
        
         
             int zeros=0;
             int ones=0;
             
          for(int i=0;i<n;i++){
              
                if(nums[i]==0){
                    zeros++;
                }else{
                    ones++;
                }
              
              count[i][0]=zeros;
              count[i][1]=ones;
              
          }
        
          int maxres=0;
        
           unordered_map<int,vector<int>>mp;
        
        
        
        for(int i=0;i<=n;i++){
            
                
                
            
            if(i==0){
                
            
                mp[count[n-1][1]].push_back(i);
                
                maxres=max(maxres,count[n-1][1]);
            }else if(i==n){
                mp[count[n-1][0]].push_back(i);
               maxres=max(maxres,count[n-1][0]);

            
            }else{
             
                
                 int ans1=count[i-1][0];
                 int ans2=count[n-1][1]-count[i-1][1];
                 int ans=ans1+ans2;
                
                 maxres=max(maxres,ans);
                mp[ans].push_back(i);
            }
        }
        

        
        return {mp[maxres]};
        
        
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
