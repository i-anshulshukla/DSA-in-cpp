class Solution {
public:
    string truncateSentence(string s, int k) {
        int spaces=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                spaces+=1;
            }
            if(spaces==k){
                string output;
                for(int j=0;j<i;j++){
                    output.push_back(s[j]);
                }
                return output;
            }
        }
        return s;
    }
};