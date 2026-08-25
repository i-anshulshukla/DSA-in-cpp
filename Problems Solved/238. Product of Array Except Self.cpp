class Solution {
public:
    int zeroes(vector<int>vec){
        int count=0;
        for(int i=0;i<vec.size();i++){
            if(vec[i]==0){
                count++;
            }
        }
        return count;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int productOfAll=1;
        if(zeroes(nums)==0){
            for(int i=0;i<nums.size();i++){
                productOfAll*=nums[i];
            }
            for(int i=0;i<nums.size();i++){
                ans.push_back(productOfAll/nums[i]);
            }
        }else if(zeroes(nums)==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                productOfAll*=nums[i];
            }
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                ans.push_back(0);
            }else{
                ans.push_back(productOfAll);
            }
            }
        }else if(zeroes(nums)>1){
            for(int i=0;i<nums.size();i++){
                ans.push_back(0);
            }
        }
        return ans;
    }
};