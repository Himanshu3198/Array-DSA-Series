class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
     
        
        int first=0,last=0;
        int n=seats.size();
        
        int res=0;
        
         
          if(seats[0]==1) first=1;
        
        int count=0;
        for(int i=0;i<n;i++){
            
            
            if(seats[i]==0) count++;
            else{
                
                if(first==0){
                    res=max(res,count);
                    count=0;
                    first=1;
                }else{
                    
                
                    res=max(res,(count+1)/2);
                    count=0;
                }
            }
            
            if(i==n-1 and seats[i]==0){
                
                last=count;
            }
            res=max(res,last);
        }
        
        return res;
        
    }
};
