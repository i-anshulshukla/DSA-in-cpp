class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int i=0;
        vector<int>arr;
        while(i < nums.size()){
        sort(nums.begin()+i,nums.end());
        int smallest2=nums[i];
        int smallest1=nums[i+1];
        arr.push_back(smallest1);
        arr.push_back(smallest2);
        i+=2;
        }
        return arr;
    }
};