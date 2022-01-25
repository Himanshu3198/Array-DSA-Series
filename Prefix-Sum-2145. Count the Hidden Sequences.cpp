2145. Count the Hidden Sequences
class Solution {
public:
    
    
//      the idea is to use prefix sum
    

    int numberOfArrays(vector<int>& diff, int lower, int upper) {
        
        
        long long mini=0,maxi=0;
        int n=diff.size();
        
          long long sum=0;
        for(auto it:diff){
            
            sum+=it;
            mini=min(mini,sum);
            maxi=max(maxi,sum);
        }
        cout<<mini<<" "<<maxi<<"\n";
        
        int res=0;
        
        for(int i=lower;i<=upper;i++){
            
        long long x=mini+i;
        long long y=maxi+i;
        
            if(x>=lower and y<=upper){
                res++;
            }
        }
        
        return res;
    }
};
