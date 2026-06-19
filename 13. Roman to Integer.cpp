class Solution {
public:
    int romanToNum(char roman){
        if(roman=='I'){
            return 1;
        }else if(roman=='V'){
            return 5;
        }else if(roman=='X'){
            return 10;
        }else if(roman=='L'){
            return 50;
        }else if(roman=='C'){
            return 100;
        }else if(roman=='D'){
            return 500;
        }else if(roman=='M'){
            return 1000;
        }
        return 0;
    }

    int romanToInt(string s) {
        int n=s.length();
        int number=0;
        for(int i=0;i<n-1;i++){
            if(romanToNum(s[i])>=romanToNum(s[i+1])){
                number+=romanToNum(s[i]);
            }else{
                number-=romanToNum(s[i]);
            }
        }
        number+=romanToNum(s[n-1]);
        return number;
    }
};