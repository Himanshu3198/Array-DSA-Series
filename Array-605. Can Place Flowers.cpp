class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
     
         
          
          int size=flowerbed.size();
        
        
        if(size==1){
            
            if(flowerbed[0]==0 and n==1){
                return true;
            }
             if(flowerbed[0]==1 and n==1){
                return false;
            }
           
        }
        
        for(int i=0;i<size;i++){
            
            
            if(n<=0) return true;
            
            if(flowerbed[i]==1) continue;
            
            if(i==0){
                
                if(flowerbed[i+1]==0){
                    
                    n--;
                    flowerbed[i]=1;
                }
            }else if(i==size-1){
                
                if(flowerbed[i-1]==0) {
                    n--;
                    flowerbed[i]=1;
                }
                
            }else{
                
                if(flowerbed[i-1]==0 and flowerbed[i+1]==0){
                    n--;
                    flowerbed[i]=1;
                }
                
            }
        }
        
        
        return n==0;
          
    }
};
