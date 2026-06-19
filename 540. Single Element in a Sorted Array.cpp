class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sum=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(i%2==0){
                sum+=nums[i];
            }else{
                sum-=nums[i];
            }
        }
        return sum;
    }
};