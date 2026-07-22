class Solution {
public:
    string findLatestTime(string s) {
        //if both HH not present
        if(s[0]=='?'&&s[1]=='?'){
            s[0]='1';
            s[1]='1';
        }
        //if both MM not present
        if(s[3]=='?'&&s[4]=='?'){
            s[3]='5';
            s[4]='9';
        }
        //firstH
        if(s[0]=='?'&&s[1]>='2'){
            s[0]='0';
        }else if(s[0]=='?'&&(s[1]=='0'||s[1]=='1')){
            s[0]='1';
        }
        //secondH
        if(s[1]=='?'&&s[0]=='0'){
            s[1]='9';
        }else if(s[1]=='?'&&s[0]=='1'){
            s[1]='1';
        }
        //firstM
            if(s[3]=='?'){
            s[3]='5';
        }
        //SecondM
        if(s[4]=='?'){
            s[4]='9';
        }
        
        return s;
    }
};