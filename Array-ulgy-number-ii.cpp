

264. Ugly Number II

class Solution {
public:
    int nthUglyNumber(int n) {
        
        
        
            /* this idea is to generate all possible pair using 2,3,5  and choose 
            minimum from this generate pair now insert it into the set untill the size of
            set will be not equal to the n
            when the size of set become to n it means we have successfully generated
            the all
            pair of n . now just return the last element from the set as
            we knew that set contain element in sorted order so our ans will be last greatest element .
            
            */
           ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
        
        set<long long>res,gen;
        
        
        gen.insert(1);
        
        
        while(res.size()!=n){
            
            
            
            long long curr=*gen.begin();
            
            res.insert(curr);
            gen.erase(curr);
            
            gen.insert(2*curr);
              
            gen.insert(3*curr);
              
            gen.insert(5*curr);
            
        }
        
        
        return *res.rbegin();
        
        
        
        

    }
};
