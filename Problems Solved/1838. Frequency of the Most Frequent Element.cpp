class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int result = 1;
        long long windowSum = 0;
        int left = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            windowSum += nums[i];
            while (1LL * nums[i] * (i - left + 1) - windowSum > k) {
                windowSum -= nums[left];
                left++;
            }
            result = max(result, i - left + 1);
        }
        return result;
    }
};