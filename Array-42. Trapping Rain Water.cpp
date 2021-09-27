// 42. Trapping Rain Water

int min(int a,int b){
        return (a<b)?a:b;
 } 
class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
          
        
             int sum=0;
        if(n<0){
            return 0;
        }
     
        
          vector<int> v1,v2,v3;
     int x=arr[0];

     for(int i=1;i<n-1;i++){
         if(x<arr[i]){
          x=arr[i];   
         }
         v1.push_back(x-arr[i]);

     }
     int y=arr[n-1];
     for(int i=n-2;i>=1;i--){
         if(y<arr[i]){
             y=arr[i];
         }
         v2.push_back(y-arr[i]);

     }
     int m=v2.size();
    //   cout<<v1.size()<<" "<<v2.size();
   

    for(int i=m-1;i>=0;i--){
         
        // cout<<v2[i]<<" ";
        
          v3.push_back(v2[i]);
         
     }
 

     for(int i=0;i<m;i++){
         
      sum+=min(v1[i],v3[i]);
         
     }
        
       
                 return sum;
        
    



        
    }
};
