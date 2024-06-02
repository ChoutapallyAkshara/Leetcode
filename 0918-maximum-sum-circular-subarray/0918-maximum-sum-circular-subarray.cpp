class Solution {
public:
    
    int maxSubarraySumNormal(vector<int>&arr) {
        int m = arr.size();
        int curr_sum = 0;
        int max_sum = INT_MIN;
        for(int i=0;i<m;i++){
            curr_sum += arr[i];
            max_sum = max(max_sum, curr_sum);
            if(curr_sum < 0){
            curr_sum = 0;
        }
    }
        return max_sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int max_normal = maxSubarraySumNormal(nums);
        if(max_normal<0){
            return max_normal;
        }
        
       int nums_sum = 0;
       for(int i=0;i<n;i++){
           nums_sum += nums[i];
           nums[i] = -nums[i];
       }
         int max_circular = nums_sum + maxSubarraySumNormal(nums);
         
        return max(max_normal,max_circular);
    }
   
};