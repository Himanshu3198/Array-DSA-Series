class Solution {
public:
          void method2(vector<int>&nums){
               int n=nums.size();
            
                for(int i=0,j=1;i<n and j<n;){
                    
                    if(nums[i]%2==0){
                        i+=2;
                    }
                    else if(nums[j]%2!=0){
                        
                        j+=2;
                    }
                    else{
                        
                        swap(nums[i],nums[j]);
                    }
                    
                }
        
             
        }
    
       vector<int>method1(vector<int>&nums){
                 vector<int>ans(nums.size());
        
        
                     int j=0;
                     int k=1;
         
                      
        
                    for(int i=0;i<nums.size();i++){
                        
                        if(nums[i]%2==0){
                            
                            ans[j]=nums[i];
                            j+=2;
                        }
                        else{
                             ans[k]=nums[i];
                            k+=2;
                            
                        }
                    }
           
           return ans;
           
       }
           
       
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        
                  

                       
                       // return  method1(nums);
                    method2(nums);
                
        
        
                return nums;
    }
};
