class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
     
        int pay=0;
        double ans=0;
        for(int i=0;i<brackets.size();i++){
           
            int curr=min(income,brackets[i][0]);
            ans+=((abs(curr-pay)*brackets[i][1]*1.0)/100.0);
            if(brackets[i][0]>=income) break;
            pay=brackets[i][0];
           
            
        }
        return ans;
    }
};
