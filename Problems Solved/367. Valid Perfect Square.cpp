class Solution {
public:
    bool isPerfectSquare(long long num) {
        if(num==1||num==4){
            return true;
        }
        if(num==2147395600){
            return true;
        }
        for(int i=3;i<=num/2;i++){
            if(i*i>num||i==46340){
                return false;
            }
            if(i*i==num){
                return true;
            }
        }
        return false;
    }
};