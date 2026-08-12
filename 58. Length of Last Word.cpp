class Solution {
public:
    int lengthOfLastWord(string s) {
        bool characterFound=false;
        int minus=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '&&characterFound==true){
                return s.length()-i-1-minus;
            }
            
            if(characterFound==false&&s[i]!=' '){
                characterFound=true;
            }
            if(characterFound==true&&i==0&&s[i]!=' '){
                return s.length()-minus;
            }
            if(characterFound==false&&i==0){
                return 0;
            }
            if(characterFound==false&&s[i]==' '){
                minus++;
            }
        }
        return 0;
    }
};