class Solution {
public:
    
    string getPattern(string pattern){
        int len=pattern.size();
        string newPat="";
        int p=1;
        map<char,string>mp;
        for(int i=0;i<len;i++){
            if(mp.count(pattern[i])){
                 newPat+=mp[pattern[i]];
            }else{
                newPat+=to_string(p);
                mp[pattern[i]]=to_string(p);
                
            }
            p++;
        }
        return newPat;
        
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
      
        vector<string>res;
        string pat=getPattern(pattern);
        cout<<pattern<<"->"<<pat<<"\n";
        for(int i=0;i<words.size();i++){
             if(pat==getPattern(words[i])) res.push_back(words[i]);
//              cout<<words[i]<<"->"<<getPattern(words[i])<<"\n";
        }
        return res;
    }
};
