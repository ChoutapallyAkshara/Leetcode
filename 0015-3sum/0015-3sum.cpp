class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>curr_res;
        for(int i=0;i<n;i++){
            int left = i+1;
            int right = n - 1;
            while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
            if(sum==0){
                curr_res.push_back(nums[i]);
                curr_res.push_back(nums[left]);
                curr_res.push_back(nums[right]);
                res.push_back(curr_res);
                //check for duplicacy
                while(left<right and nums[left]==curr_res[1])left++;
                while(left<right and nums[right]==curr_res[2])right--;
                curr_res.clear();
                }
                else if(sum<0){
                    left++;
                }
                else{
                    right--;
                }
            
        }
            while(i<n-1 and nums[i]==nums[i+1]){
                i++;
            }
        }
        return res;
        
    }
};