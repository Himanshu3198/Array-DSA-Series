class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        
         
        for(int i=num/2;i<=num;i++){
            

            string s=to_string(i);
            reverse(s.begin(),s.end());
            int rI=stoi(s);
            int ans=i+rI;
            if(ans==num) return true;
        }
            
            
        return false;
        
    }
};
