class Solution {
public:
    bool isPalindrome(int num) {
        if(num<0){
            return false;
        }
        vector<int> digits;
        while(num>=10){
        digits.push_back(num%10);
        num/=10;
        }
        digits.push_back(num);
        for(int i=0;i<digits.size()/2;i++){
            if(digits[i]!=digits[digits.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};