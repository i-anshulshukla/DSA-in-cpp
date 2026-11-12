class Solution {
public:
    bool isPowerOfFour(int n) {
        long int curr=1;
        while(curr<=n){
            if(curr==n){
                return true;
            }
            curr*=4;
        }
        return false;
    }
};