class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int frequency=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(frequency==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                frequency+=1;
            }else if(ans!=nums[i]){
                frequency-=1;
            }
        }
        return ans;
    }
};