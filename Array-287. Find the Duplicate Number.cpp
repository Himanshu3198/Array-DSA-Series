class Solution {
public:
    int findDuplicate(vector<int>&nums) {
        
        
        
      bool visit[nums.size()];
        memset(visit,0,sizeof(visit));
        
        for(int i=0;i<nums.size();i++){
            if(visit[nums[i]]==1){
                return nums[i];
            }
            else{
                visit[nums[i]]=1;
            }
        }
        return NULL;
        
    }
};
