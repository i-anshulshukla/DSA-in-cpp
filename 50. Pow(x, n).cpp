class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(n==0){
            return 1;
        }
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        if(N<0){
            x=(1/x);
            N*=-1;
        }
        double value=1;
        while (N > 0) {
            if (N % 2 == 1) { 
                value *= x;
            }
            x *= x; 
            N /= 2;  
        }
        return value;
    }
};