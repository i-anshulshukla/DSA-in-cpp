class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int minMoves=0;
        sort(nums.begin(),nums.end());
        int middle=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            if(nums[middle]<nums[i]){
                minMoves+=nums[i]-nums[middle];
            }else{
                minMoves+=nums[middle]-nums[i];
            }
        }
        return minMoves;
    }
};