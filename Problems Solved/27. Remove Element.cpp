class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int write_ptr = 0; 
        

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != val) {

                nums[write_ptr] = nums[i];

                write_ptr++;
            }
        }
        

        return write_ptr;
    }
};