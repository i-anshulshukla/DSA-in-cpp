class Solution {
public:
    string reverseWords(string s) {
        int space=0;
        bool isWord=false;
        string reversed;
        int wordStart;
        int wordEnd;
        for(int i=s.length()-1;i>=0;i--){
            if(space==0&&isWord==false){
                if(s[i]!=' '){
                    wordEnd=i;
                    isWord=true;
                }
            }else{
                if(isWord==true&&s[i]==' '){
                    wordStart=i+1;
                    space++;
                    isWord=false;
                    for(int j=wordStart;j<=wordEnd;j++){
                        reversed.push_back(s[j]);
                        if(j==wordEnd){
                            reversed.push_back(' ');
                        }
                    }
                }else if(isWord==false&&s[i]!=' '){
                    isWord=true;
                    wordEnd=i;
                }
            }
            if(i==0&&s[i]!=' '){
                wordStart=i;
                    space++;
                    isWord=false;
                    for(int j=wordStart;j<=wordEnd;j++){
                        reversed.push_back(s[j]);
                    }
            }
        }
        while(reversed[reversed.length()-1]==' '){
            reversed.pop_back();
        }
        return reversed;
    }
};