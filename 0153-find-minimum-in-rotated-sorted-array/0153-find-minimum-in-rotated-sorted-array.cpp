class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end = n-1;
        if(nums[start]<=nums[end]){
            return nums[start];
        }
        while(start<=end){

            int mid=start+(end-start)/2;
            if(mid>0 && nums[mid]<nums[mid-1]){
                      return nums[mid];
            }
            else if(nums[start]<=nums[mid] && nums[mid]>nums[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};