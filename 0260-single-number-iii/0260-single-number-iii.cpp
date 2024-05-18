class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       
       int n=nums.size();
        if(n==2){
            return {nums[0],nums[1]};
        }
        int x=0;
        for(int i=0;i<n;i++){
            x^=nums[i];
        }
        int res1=0;
        int res2=0;
        int indx;
        for(int i=0;i<32;i++){
            if(x&(1<<i)){
               indx=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]&(1<<indx)){
                res1^=nums[i];
            }
            else{res2^=nums[i];}
        }
       return {res1,res2};
    }
};