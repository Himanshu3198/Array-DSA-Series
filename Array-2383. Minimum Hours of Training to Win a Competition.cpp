class Solution {
public:
    int minNumberOfHours(int iEn, int iEx, vector<int>& en, vector<int>& ex) {
    
        int n=en.size(),res=0;
        for(int i=0;i<n;i++){
            if(iEn<=en[i]){
                int x=en[i]-iEn+1;
                res+=x;
                iEn+=x;
            }      
            if(iEx<=ex[i]){
                int y=ex[i]-iEx+1;
                res+=y;
                iEx+=y;
            }
            iEn-=en[i];
            iEx+=ex[i];   
        }
        return res;
    }
};
