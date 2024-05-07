class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN; 
        int mini = INT_MAX;
        for(int i=0; i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        while(mini!=maxi){
            if(mini>maxi){
                mini=mini-maxi;
                }
            else{
                maxi=maxi-mini;
            }
        }
        return mini;
    }
    
};