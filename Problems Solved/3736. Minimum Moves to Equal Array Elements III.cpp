class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[max]<nums[i]){
                max=i;
            }
        }
        int minimumMoves=0;
        for(int i=0;i<nums.size();i++){
           minimumMoves+=nums[max]-nums[i];
        }
        return minimumMoves;
    }
};