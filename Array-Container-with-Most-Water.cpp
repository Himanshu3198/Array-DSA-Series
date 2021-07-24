// 11. Container With Most Water

class Solution {
public:
    int maxArea(vector<int>& arr) {
          int i=0,j=arr.size()-1;
        
        
        int ans=INT_MIN;
        
        
        while(i<j){
            
            int min_hei=min(arr[i],arr[j]);
            
            ans=max(ans,min_hei*(j-i));
            if(arr[i]<arr[j]){
                i++;
            }
            else{
                j--;
            }
            
            
        }
        
        return ans;
        
        
        

        
    }
};
