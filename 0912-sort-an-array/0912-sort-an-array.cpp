class Solution {
public:
    vector<int>merge(vector<int>& nums,int start, int mid,int end,int n1, int n2, vector<int>& left, vector<int>& right){
        int n=nums.size();
        
        int i=0,j=0,k=start;
        while(i<n1 && j<n2){
            if(left[i]<=right[j]){
                nums[k++]=left[i++];
            }
            else{
                nums[k++]=right[j++];
            }
        }
        while(i<n1){
            nums[k++]=left[i++];
        }
        while(j<n2){
            nums[k++]=right[j++];
        }
        return nums;
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        int mid = start+(end-start)/2;
        int n1 = mid - start + 1;
        int n2 = end - mid;
        vector<int> left;
        vector<int> right;
        for(int i=0;i<n1;i++){
            left.push_back(nums[start+i]);
        }
        for(int i=0;i<n2;i++){
            right.push_back(nums[mid+1+i]);
        }
        if(end>start){
            sortArray(left);
            sortArray(right);
            merge(nums,start,mid,end,n1,n2,left,right);
        }
        return nums;
        
    }
};