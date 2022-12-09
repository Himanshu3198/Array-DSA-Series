class Solution {
public:
    vector<int>reSet,shuffleArr;
    int n;
    Solution(vector<int>& nums) {
        n=nums.size();
        reSet=nums;
        shuffleArr=nums;
    }
    
    vector<int> reset() {
        shuffleArr=reSet;
        return shuffleArr;
    }
    
    vector<int> shuffle() {
     
        for(int i=0;i<n;i++){
            int idx=rand()%n;
            swap(shuffleArr[i],shuffleArr[idx]);
        }
        return shuffleArr;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
