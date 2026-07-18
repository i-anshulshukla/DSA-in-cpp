class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
        }
        for(int i=0;i<arr.size();i++){
            for(int j=i+2;j<arr.size();j=j+2){
                for(int s=i;s<=j;s++){
                    sum=sum+arr[s];
                }
            }
        }
        return sum;
    }
};