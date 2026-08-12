class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int frequency=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                frequency++;
                if(frequency>2){
                    nums.erase(nums.begin()+i+1);
                    frequency--;
                    i--;
                }
            }else if(nums[i]!=nums[i+1]){
                frequency=1;
            }
        }
        return nums.size();
    }
};