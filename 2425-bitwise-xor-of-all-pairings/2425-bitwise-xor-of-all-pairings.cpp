class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        
        
        vector<int> nums3(nums1.size(),0);
        int res = 0;
        for(int i=0;i<nums2.size();i++){
        res = res ^ nums2[i];
        } 
        
        for(int i=0;i<nums1.size();i++){
            if((nums2.size())&1){
              nums3[i] = res ^ nums1[i];
            }
            else{
                nums3[i] = res;
            }
        }
        
        res = 0;
        for(int i=0;i<nums1.size();i++){
            res = res ^ nums3[i];
        }
      return res;  
    }
};