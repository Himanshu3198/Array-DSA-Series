class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
         int minIndex=INT_MAX,minEle=INT_MAX;
        
        int maxIndex=INT_MIN,maxEle=INT_MIN;
        
         int n=nums.size();
        
        if(n==1) return 1;
        for(int i=0;i<n;i++){
            
            if(nums[i]<minEle){
                
                minEle=nums[i];
                minIndex=i;
            }
         if(nums[i]>maxEle){
                
                maxEle=nums[i];
                maxIndex=i;
            }
              
        }
        // while removing from left
        int option1=max(minIndex,maxIndex)+1;
        
        
         int temp1=minIndex;
         int temp2=maxIndex;
        
        if(temp1<temp2){
            swap(temp1,temp2);
        }
        
        int x=temp2+1; int y=n-temp1;
        
         // while removing from left and right 
        int option2=x+y;
        
        // while removing from right
        int option3=n-min(minIndex,maxIndex);
        
        
        return min({option1,option2,option3});
        
        
    }
};
