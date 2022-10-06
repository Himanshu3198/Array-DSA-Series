class TimeMap {
public:
    
    map<string,map<int,string>>mp;
    TimeMap() {
        
    }
    void set(string key, string value, int timestamp) {
        
        mp[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
         if(!mp.count(key) || timestamp==0)  return "";
         if(mp.count(key) && mp[key].count(timestamp)){
             return mp[key][timestamp];
         }
         return get(key,timestamp-1);
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
