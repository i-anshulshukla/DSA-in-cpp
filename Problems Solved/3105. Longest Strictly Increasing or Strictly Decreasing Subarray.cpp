class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int dec=1;
        for(int i=0;i<nums.size()-1;i++){
            int incIni=1;
            int decIni=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[j-1]){
                    incIni++;
                }else{
                    break;
                }
            }
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[j-1]){
                    decIni++;
                }else{
                    break;
                }
            }
            if(incIni>inc){
                inc=incIni;
            }
            if(decIni>dec){
                dec=decIni;
            }
            
        }
        return max(inc,dec);
    }
};