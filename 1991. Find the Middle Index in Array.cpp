class Solution {
public:
    //LHS Sum Function
    int sumOfLhs(vector<int>&vec,int indexOfMiddle){
        int sum=0;
        if(indexOfMiddle==0){
            return 0;
        }
        for(int i=0;i<indexOfMiddle;i++){
            sum+=vec[i];
        }
        return sum;
    }
    //RHS Sum Function
    int sumOfRhs(vector<int>&vec,int indexOfMiddle){
        int sum=0;
        if(indexOfMiddle==vec.size()-1){
            return 0;
        }
        for(int i=indexOfMiddle+1;i<vec.size();i++){
            sum+=vec[i];
        }
        return sum;
    }
    int findMiddleIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(sumOfLhs(nums,i)==sumOfRhs(nums,i)){
                return i;
            }
        }
        return -1;
    }
};