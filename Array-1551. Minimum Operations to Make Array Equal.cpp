class Solution {
public:
    
    /* consider the situation where we want to distribute  minimum m candies among n childrens 
       the idea is to distribute candy equally for doing this we calculate total numbers of candy's
       and we  divided  it by n=3   [1 3 5]  sum=9/3 =3
      Now check  in the array if we have  candy less than or greater than minimum candy  then we store      
      its  absolute difference and divided it by 2 because we can perform  only  on array two operation   */
    
    int minOperations(int n) {
     
        
        int sum=0;
        
        for(int i=0;i<n;i++){
            
            sum+=(2*i+1);
        }
        
        int maxnum=sum/n;
        
        int ans=0;
        
        
        
        for(int i=0;i<n;i++){
            
            int x=2*i+1;
            
            if(x<maxnum or x>maxnum){
                ans+=abs(x-maxnum);
            }
        }
   
        
     
         return ans/2;
        
    }
};
