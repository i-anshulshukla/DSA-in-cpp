class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;int j=i+1;
        while((nums[i]+nums[j])!=target){
            if(j<n&&(j+1)<=(n-1)){
            j=j+1;
            }else if(i<n&&(i+1)<=(n-1)){
                i=i+1;
                j=i+1;
            }
            }
            return {i,j};
    }
};