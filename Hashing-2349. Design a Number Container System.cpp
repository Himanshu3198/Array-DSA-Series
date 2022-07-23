class NumberContainers {
public:
    unordered_map<int,int>num;
    unordered_map<int,set<int>>pos;
  
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
       
        if(num.count(index)){
            
            pos[num[index]].erase(index);
            num[index]=number;
            pos[number].insert(index);
        }
        else{
            num[index]=number;
            pos[number].insert(index);
        }
        
    }
    
    int find(int number) {
        
        if(pos.count(number) && pos[number].size()>0) return *pos[number].begin() ;
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
