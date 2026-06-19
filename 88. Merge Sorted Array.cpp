class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Swapping nums2 elements to nums1.
        int i=m;
        for(int j=0;j<nums2.size();j++){
            swap(nums1[i],nums2[j]);
            i++;
        }
        //using bubble sort for sorting nums1
        for(int i=0;i<nums1.size();i++){
            for(int j=1;j<nums1.size();j++){
                if(nums1[j-1]>nums1[j])
                swap(nums1[j-1],nums1[j]);
            }
        }
    }
};