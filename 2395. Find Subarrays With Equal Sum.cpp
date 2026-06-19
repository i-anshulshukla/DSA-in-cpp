class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        
        // Loop for the first pair
        for (int i = 1; i < n; i++) {
            int firstSum = nums[i] + nums[i - 1];
            
            // Loop for the second pair (starts ahead of the first pair)
            for (int j = i + 1; j < n; j++) {
                int secondSum = nums[j] + nums[j - 1];
                
                if (firstSum == secondSum) {
                    return true; 
                }
            }
        }
        return false;
    }
};