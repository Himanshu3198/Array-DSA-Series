class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        int x=n;
        while(1){
            if(x%2==0) return x;
            x+=x;
        }
        return 0;
    }
};
