class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int l=0;
        int r=n-1;
        string temp = "";
        string ans="";
        
        while(l<=r){
            //if(s[l]==' ' && (l==0||l==n-1)){
               // l++;
               // continue;
           // }
            char ch=s[l];
            if(ch!=' ')temp+=ch;
            else if(ch==' ' && temp!=""){
                     if(ans!="")ans = temp + " " + ans;
                     else ans=temp;
                     temp=""; 
        }
            
            l++;
    }
        
        if(temp!=""){
           
            if(ans!="") ans = temp + " " + ans;
            else ans=temp;
        }
        
        return ans;
    }
};