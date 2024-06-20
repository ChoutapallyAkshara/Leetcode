class Solution {
public:
    bool isFeasible(vector<int>&nums,int k,int ans){
        int m=nums.size();
        int count=1;
        int curr_sum=0;
        for(int i=0;i<m;i++){
            if(curr_sum+nums[i]>ans){
                count++;
                curr_sum=nums[i];
            }
            else{
                curr_sum+=nums[i];
            }
            
        }
        return (count<=k);
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum =0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
            maxi=max(maxi,weights[i]);
        }
        int low=maxi;
        int high=sum;
        int res=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(isFeasible(weights,days,mid)){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};