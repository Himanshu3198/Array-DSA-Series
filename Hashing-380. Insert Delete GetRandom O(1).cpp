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

// java version 
class RandomizedSet {
    
    List<Integer> list;
    Map<Integer,Integer> cache;
    Random random;
    public RandomizedSet() {
        this.list = new ArrayList<>();
        this.cache = new HashMap<>();
        this.random = new Random();
    }
    
    public boolean insert(int val) {
        if(cache.containsKey(val)) return false;
        list.add(val);
        cache.put(val,list.size()-1);
        return true;
    }
    
    public boolean remove(int val) {
        
        if(!cache.containsKey(val)) return false;

        int idx = cache.get(val);
        int lastIdx = list.size()-1;
        int lastVal = list.get(lastIdx);
        list.set(idx,lastVal);
        list.remove(lastIdx);
        cache.put(lastVal,idx);
        cache.remove(val);
        return true;

    }
    
    public int getRandom() {
        
        int randIdx = random.nextInt(list.size());
        return list.get(randIdx);
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
