class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h){
          int m=l+(h-l)/2;
            if((m==0||nums[m]>nums[m-1])&&(m==n-1||nums[m]>nums[m+1])){
                return m;
            }
            else if(m>0&&nums[m-1]>nums[m]){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return -1;
    }
};