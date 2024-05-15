class Solution {
public:
    double myPow(double x, int n) {
        long long exp=n;
        double res=1.0;
        if(n<0){
            exp=exp*(-1);
        }
        while(exp>0){
            if(exp%2==0){
                x*=x;
                exp=exp/2;
            }
            else{
                res*=x;
                exp=exp-1;
            }
        }
        if(n<0){
            return (1.0)/res;
        }
        return res;
        
    }
};