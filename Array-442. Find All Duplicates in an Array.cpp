// 442. Find All Duplicates in an Array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     
        
        int  a[1000001];
        
        memset(a,0,sizeof(a));
        vector<int>res;
        
        for(int i=0;i<nums.size();i++){
        
            
            a[nums[i]]++;
        }
        
           for(int i=0;i<nums.size();i++){
            
            if(a[nums[i]]==2){
                
                res.push_back(nums[i]);
                a[nums[i]]--;
            }
            
        
        }
        
    
        return res;
        
       
        
    }
};
