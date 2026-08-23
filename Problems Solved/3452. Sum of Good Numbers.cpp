class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            bool isGood = true; // Pehle maan lo ki number accha hai

            // Agar left neighbor valid hai, aur wo nums[i] se bada ya barabar hai
            if (i - k >= 0 && nums[i] <= nums[i - k]) {
                isGood = false;
            }
            
            // Agar right neighbor valid hai, aur wo nums[i] se bada ya barabar hai
            if (i + k < n && nums[i] <= nums[i + k]) {
                isGood = false;
            }

            // Agar dono me se kisi ne bhi isGood ko false nahi kiya, matlab condition satisfied!
            if (isGood) {
                sum += nums[i];
            }
        }

        return sum;
    }
};