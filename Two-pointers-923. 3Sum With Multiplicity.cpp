class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        
           int n=arr.size();
           int result=0;
           unordered_map<int,int>multiple;
           int mod=1e9+7;
           for(int i=0;i<n-2;i++){
               
               for(int j=i+1;j<n-1;j++){
                   
                   int find=target-(arr[i]+arr[j]);
                   
                   int p1=j+1;
                   int p2=n-1;
                   
                   while(p1<p2){
                       
                       if(arr[p1]==find){
                           p1++;
                           result++;
                           result=result%mod;
                       }if(arr[p2]==find){
                           p2--;
                           result++;
                           result=result%mod;
                       }else if(find>arr[p1]){
                           p1++;
                       }else{
                           p2--;
                       }
                   }
               }
           }
        
        return result;
    }
};
