class MyCalendar {
public:
    vector<pair<int,int>>res;
    bool available(int &start,int &end){
        
        for(int i=0;i<res.size();i++){
            
            if(!(start>=res[i].second) && !(res[i].first>=end))return false;
        }
        return true;
        
    }
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
       
        
        if(available(start,end)){
            
            res.push_back({start,end});
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
