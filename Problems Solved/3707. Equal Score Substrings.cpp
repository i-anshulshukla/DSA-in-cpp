class Solution {
public:
    bool scoreBalance(string s) {
        if(s.length()==2&&s[0]==s[1]){
            return true;
        }
        int sumOfFront=(s[0]-96);
        int sumOfBack=0;
        for(int i=1;i<s.length()-1;i++){
            sumOfFront+=(s[i]-96);
            for(int j=i+1;j<s.length();j++){
                sumOfBack+=(s[j]-96);
            }
            if(sumOfFront==sumOfBack){
                return true;
            }else{
                sumOfBack=0;
            }
        }
        return false;
    }
};