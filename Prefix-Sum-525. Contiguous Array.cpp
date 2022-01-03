class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
       /* there can be two scenarios 
       1) if we  replace 0 to -1 and then calculate 
         array sum then if sum==0 it means we have find contigous array with equal
          no of ones and zeros then in this  case answer will current index+1
          
          2 )  In this case sum will be not zero but may be repeated it means that 
              contigous array with equal no. of ones zeros exit between this two sum
              
              for this apporach use map for storing  current sum and index  when  a sum 
              present in map then  lenght of contigous array will i.e mp<int ,int> 
              auto it.first=-5 it.second=2  and sum=-5 i=7,  
                length= i-it.second=7-2=5*/
        
        int res=0,n=nums.size();
        
         unordered_map<int,int>mp;
        
        
        int sum=0;
        for(int i=0;i<n;i++){
            
            sum+=(nums[i]==0?-1:1);
            
            
            auto it=mp.find(sum);
            
            
            if(sum==0){
                res=i+1;
            }
            else if(it==mp.end()){
                mp[sum]=i;
            }else{
                
                if(res<i-it->second){
                    res=i-it->second;
                }
            }
        }
        
        return res;
        
        
     
    }
};
