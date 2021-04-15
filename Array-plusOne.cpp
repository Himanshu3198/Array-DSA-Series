// 66. Plus One


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size();
        
        
        int sum=0,carry=1;
        
        for(int i=n-1;i>=0 and carry>0;i--){
            
            sum=carry+digits[i];
             
            carry=(sum>=10)?1:0;
             sum=sum%10;
            digits[i]=sum;
        }
    
    
    if(carry){
        
        digits.insert(digits.begin()+0,carry);
    }
        
        return digits;
    }
    
    
};
