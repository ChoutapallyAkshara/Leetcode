class Solution {
public:
    int minBitFlips(int start, int goal) {
        if(start==goal){
            return 0;
        }
        int count=0;
        while(start!=goal){
            if((start&1)!=(goal&1)){
                start^=1;
                count ++;
            }
               start>>=1;
               goal>>=1;
        }
               return count;
        
        
        
        }
};