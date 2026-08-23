class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int write=0;
        int size=nums.size();
        for(int read=1;read<size;read++){
            if(nums[write]!=nums[read]){
                write++;
                nums[write]=nums[read];
            }
        }
        return write+1;
    }
};