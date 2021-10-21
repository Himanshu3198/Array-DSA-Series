// 380. Insert Delete GetRandom O(1)

class RandomizedSet {
public:
    
    unordered_map<int,int>mp;
    vector<int>nums;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        
        if(mp.find(val)!=mp.end()){
            return false;
        } 
        
        mp[val]=nums.size();
        nums.push_back(val);
        
        return true;
        
          
    }
    
    bool remove(int val) {
        
        if(mp.find(val)==mp.end()){
            
          
            return false;
        }
          int lastidx=mp[val];
        swap(nums[mp[val]],nums[nums.size()-1]);
        
          nums.pop_back();
      
        mp[nums[lastidx]]=lastidx;
           mp.erase(val);
         
        
        return true;
    }
    
    int getRandom() {
      
        return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
