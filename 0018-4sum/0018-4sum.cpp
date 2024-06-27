class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>curr_res;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int left=j+1;
                int right=n-1;
                while(left<right){
                long sum = long(nums[i]) + long(nums[j]) + long(nums[left]) + long(nums[right]);
                if(sum == target){
                    curr_res.push_back(nums[i]);
                    curr_res.push_back(nums[j]);
                    curr_res.push_back(nums[left]);
                    curr_res.push_back(nums[right]);
                    res.push_back(curr_res);
                    //check for duplicacy
                    while(left<right and nums[left]==curr_res[2])left++;
                    while(left<right and nums[right]==curr_res[3])right--;
                    curr_res.clear();
                }
                    else if(sum<target){
                        left++;
                    }
                    else{
                        right--;
                    }
            }
                while(j<n-1 and nums[j]==nums[j+1])j++;
            }
            while(i<n-1 and nums[i]==nums[i+1])i++;
        }
        return res;
    }
};