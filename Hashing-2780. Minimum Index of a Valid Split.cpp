class Solution {
public:


    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>pos;
        for(int i=0;i<n;i++){
            pos[nums[i]].push_back(i);
        }
        int ans=n;
        for(auto it:pos){
          
             vector<int>v=it.second;
             if(v.size()==1)continue;
            // if(it.first==3){
                 // cout<<it.first<<" "<<it.second.size()<<"\n";
             for(int i=0;i<v.size();i++){
                 // cout<<"pos<<"<<v[i]<<"\n";
                 long long int freq1=(i+1)*2;
                 int m1=v[i]+1;
                 // cout<<"freq1-"<<freq1<<" "<<"m1-"<<m1<<"\n";
                 if(freq1>m1){
                     
                     long long int freq2=(v.size()-i-1)*2;
                     int m2=(n-v[i]-1);
                     // cout<<"freq2-"<<freq2<<" "<<"m2 "<<m2<<"\n";
                     if(freq2>m2){
                         ans=min(ans,v[i]);
                         break;
                     }
                 }
             // }
            }
            // cout<<"\n";
        }
        return ans==n?-1:ans;
        
    }
};
