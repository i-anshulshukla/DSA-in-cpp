class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int start=0;
        int pairsRemoved=0;
        for(int end=start+1;end<nums.size();end++){
            if(nums[start]==nums[end]){
                nums.erase(nums.begin()+end);
                nums.erase(nums.begin()+start);
                pairsRemoved+=1;
                end=start;
            }else if((nums[start]!=nums[end]&&end==nums.size()-1)&&start<nums.size()-1){
                start=start+1;
                end=start;
            }
        }
        vector<int>output;
        output.push_back(pairsRemoved);
        output.push_back(nums.size());
        return output;
    }
};