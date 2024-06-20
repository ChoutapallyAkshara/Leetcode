class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2 ;
        int i=0,j=0,m1=0,m2=0;
        int count=0;
        while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]){
                if(count==(n/2)) m1=nums1[i];
                if(count==((n/2)-1)) m2=nums1[i];
            count++;
            i++;
        }
            else{
                if(count==(n/2)) m1=nums2[j];
                if(count==((n/2)-1)) m2=nums2[j];
                count++;
                j++;
            }
        }
        while(i<n1){
            if(count==(n/2)) m1=nums1[i];
                if(count==((n/2)-1)) m2=nums1[i];
            count++;
            i++;
        }
         while(j<n2){
            if(count==(n/2)) m1=nums2[j];
                if(count==((n/2)-1)) m2=nums2[j];
            count++;
            j++;
        }
        if(n&1) return m1;
        else{
           return  (double)((double)(m1+m2))/2.0;
        }

        }
};