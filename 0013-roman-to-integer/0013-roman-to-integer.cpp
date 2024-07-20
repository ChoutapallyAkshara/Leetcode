class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int sum=0;
        unordered_map<int,int>m = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0;i<n;i++){
            if(m[s[i]]<m[s[i+1]]){
                sum-=m[s[i]];
            }
            else{
                sum+=m[s[i]];
            }
        }
        return sum;
    }
};