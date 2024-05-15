class Solution {
public:
    bool isThree(int n) {
        int res=0;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                res++;
                if(i!=(n/i)){
                    res++;
                }
            }
            
        }
        return res==3;
    }
};