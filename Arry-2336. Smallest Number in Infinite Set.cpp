class SmallestInfiniteSet {
public:
    
    vector<int>nums;
    SmallestInfiniteSet() {
        
        nums.resize(1001,1);
    }
    
    int popSmallest() {
        int res=-1;
        for(int i=1;i<1001;i++){
            if(nums[i]==1){
                res=i;
                nums[i]=0;
                break;
            }
        }
        if(res==-1) return NULL;
        return res;
    }
    
    void addBack(int num) {
       nums[num]=1;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
