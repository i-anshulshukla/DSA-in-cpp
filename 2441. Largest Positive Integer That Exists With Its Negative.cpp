class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        int maxK = -1; // Track the maximum valid K found
        
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                for(int j = 0; j < n; j++){
                    if(nums[j] < 0){
                        // Compare values and ensure it's larger than our current maxK
                        if(nums[i] == -1 * nums[j]){
                            maxK = max(maxK, nums[i]);
                        }
                    }
                }
            }
        }
        return maxK;
    }
};