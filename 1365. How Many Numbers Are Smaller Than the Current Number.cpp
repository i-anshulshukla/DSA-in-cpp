class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int start=0;
        vector<int>finalSmallerThan;
        while(start<nums.size()){
            int end=0;
            int smallerThan=0;
            while(end<nums.size()){
            if(nums[start]>nums[end]){
                smallerThan+=1;
            }
            end++;
        }
        finalSmallerThan.push_back(smallerThan);
        start++;
        }

        return finalSmallerThan;
    }
};