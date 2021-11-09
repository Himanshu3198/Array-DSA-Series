class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
     
        
         int n=arr.size();
        
        if(n<3) return false;
         int left=1;
        
        while(left<n){
            
            
            if(arr[left-1]<arr[left])left++;
            else break;
        }
        
        
        if(left==n or left==1) return false;
        
        
        while(left<n){
             
                   if(arr[left-1]>arr[left]){
                       left++;
                   }
             
          
                   else break;
        }
        
        if(left==n) return true;
        
        return false;
    }
};
