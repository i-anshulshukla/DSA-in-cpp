class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowelFirst=0;
        int vowelSecond=0;
        for(int i=0;i<s.length()/2;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                vowelFirst+=1;
            }   
        }
        for(int i=s.length()/2;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                vowelSecond+=1;
            }
        }

        if(vowelFirst==vowelSecond){
            return true;
        }else{
            return false;
        }
    }
};