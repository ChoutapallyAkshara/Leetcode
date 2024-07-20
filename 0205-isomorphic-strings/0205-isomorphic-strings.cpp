class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m=s.length();
        int n=t.length();
        if(m!=n)return false;
        unordered_map<int,int>h1,h2;
        for(int i=0;i<n;i++){
            if(!h1.count(s[i])&&!h2.count(t[i])){
                h1[s[i]]=t[i];
                h2[t[i]]=s[i];
            }
            
            else if(h1.count(s[i])&&h2.count(t[i])){
                if(h1[s[i]]!=t[i]||h2[t[i]]!=s[i]) return false;
            }
               
             else{
                 return false;
             }
               }
               
             return true;
    }
            
};