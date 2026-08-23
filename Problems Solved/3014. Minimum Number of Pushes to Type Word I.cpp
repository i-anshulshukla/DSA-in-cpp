class Solution {
public:
    int minimumPushes(string word) {
        int minPush=0;
        int n=word.length();
        if(n<=8){
            minPush=n*1;
        }else if(n<=16){
            minPush=8+((n-8)*2);
        }else if(n<=24){
            minPush=24+((n-16)*3);
        }else if(n<=26){
            minPush=48+((n-24)*4);
        }
        return minPush;
    }
};