
// time complexity O(n)

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int n=nums.size();
        
        
    
         unordered_map<int,int>even,odd;
        
        int totalEven=0,totalOdd=0;
        
        
        for(int i=0;i<n;i++){
            
            if(i%2==0){
                even[nums[i]]++;
                totalEven++;
            }else{
                
                odd[nums[i]]++;
                totalOdd++;
            }
        }
        
        int firstEvenCount=0,firstEven=0,firstOddCount=0,firstOdd=0;
        int secondEvenCount=0,secondEven=0,secondOddCount=0,secondOdd=0;
        
        
        for(auto it:even){
            
            if(it.second>firstEvenCount){
                
                secondEvenCount=firstEvenCount;
                firstEvenCount=it.second;
                
                secondEven=firstEven;
                firstEven=it.first;
            }else if(it.second>secondEvenCount){
                
                secondEvenCount=it.second;
                secondEven=it.first;
            }
            
        }
        
                for(auto it:odd){
            
            if(it.second>firstOddCount){
                
                secondOddCount=firstOddCount;
                firstOddCount=it.second;
                
                secondOdd=firstOdd;
                firstOdd=it.first;
            }else if(it.second>secondOddCount){
                
                secondOddCount=it.second;
                secondOdd=it.first;
            }
            
        }
        
        
        int evenOp=totalEven-firstEvenCount;
        
        if(firstEven!=firstOdd){
            evenOp+=(totalOdd-firstOddCount);
        }else{
            evenOp+=(totalOdd-secondOddCount);
        }
        
        int oddOp=totalOdd-firstOddCount;
        
        
        if(firstOdd!=firstEven){
            oddOp+=(totalEven-firstEvenCount);
        }else{
            oddOp+=(totalEven-secondEvenCount);
        }
        
        
        return min(evenOp,oddOp);
        
        
        
        
    }
};
