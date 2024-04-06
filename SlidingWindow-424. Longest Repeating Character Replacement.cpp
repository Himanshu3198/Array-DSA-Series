class Solution {
public:
    
    int getMaxFreq(unordered_map<char,int>mp){
        int maxi=0;
        for(auto it:mp) maxi=max(maxi,it.second);
        return maxi;
    }
    int characterReplacement(string s, int k) {
        
       unordered_map<char,int>hash;
       int left=0,right=0,maxi=0,result=0,n=s.size();
       for(right=0;right<n;right++){
         
          hash[s[right]]++;
           maxi=max(maxi,hash[s[right]]);
           int len=right-left+1;
           if((len-maxi)>k){
             // while((len-maxi)>k && left<right){
               hash[s[left]]--;
               maxi=getMaxFreq(hash);
               left++;
             // }
           }else{
             result=max(result,len);
           }
         if(maxi==n) return n;
         
           
       }
          
       return result;
    }
};
