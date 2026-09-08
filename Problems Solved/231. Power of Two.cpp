class Solution {
public:
    bool isPowerOfTwo(int n) {
        long int curr=1;
        while(curr<=n){
            if(curr==n){
                return true;
            }
            curr*=2;
        }
        return false;
    }
};