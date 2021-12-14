// class Solution {
// public:
//     int countPoints(string rings) {
      
//         unordered_map<int,vector<char>>mp;
        
//         int n=rings.size();
//         int i=0;
//         while(i<n){
//             if(i+1<n){
//                 mp[rings[i+1]-'0'].push_back(rings[i]);   
//             }
         
//             i+=2;
//         }
        
        
//         int res=0;
        
//         for(auto it:mp){
            
//                vector<int>freq(26,0);
//             for(auto v:it.second){
                
//                   freq[v-'A']++;
//             }
//              if(freq['R'-'A']>=1 and freq['G'-'A']>=1 and freq['B'-'A']>=1){
//                  res++;
//              }
//         }
        
//         return res;
        
        
            
//     }
    
// };
class Solution {
public:
    int countPoints(string rings) {
        unordered_map<char, int> colors = {{'R', 1}, {'G', 2}, {'B', 4}};
        vector<char> rods(10, 0);
        
        for (int i = 0; i < rings.size(); i += 2)
            rods[rings[i+1] - '0'] |= colors[rings[i]];
        
        int res = 0;
        for (auto rod : rods) 
            if (rod == 7) res++;
        
        return res;
    }
};
