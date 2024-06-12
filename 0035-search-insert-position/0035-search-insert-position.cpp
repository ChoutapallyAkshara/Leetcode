class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(); 
        int low = 0;
        int high = n-1;
        int res = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<target){
               res = mid+1;
                low = mid + 1;
            }
            else if(nums[mid]==target){
                return mid;
            }
            else{
                high = mid - 1;
            }
        }
        return res;
    }
};