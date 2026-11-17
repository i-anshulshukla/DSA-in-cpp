class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=0;
        int min=0;
        int gcd=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[max]){
                max=i;
            }
            if(nums[i]<nums[min]){
                min=i;
            }
        }
      
        for(int i=1;i<=nums[min];i++){
            if(nums[min]%i==0&&nums[max]%i==0){
                
                gcd=i; 
            }
        }
        return gcd;
    }
};