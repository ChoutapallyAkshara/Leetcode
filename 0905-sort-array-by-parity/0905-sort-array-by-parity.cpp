class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      int n=nums.size(); 
      int i=0;
      int j=n-1;
        vector<int>res(n);
        for(int k=0;k<n;k++){
          if(nums[k]%2==0){
              res[i]=nums[k];
              i++;
          }
            else{
               res[j]=nums[k];
                j--;
            }
      }
       return res; 
    }
};