class Solution {
public:

    string processStr(string s) {
        string result;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                if(result.length()!=0){
                result.pop_back();
                }
            }else if(s[i]=='#'){
                int x=result.length();
                for(int j=0;j<x;j++){
                    result.push_back(result[j]);
                }
            }else if(s[i]=='%'){
                if(result.length()!=0){
                reverse(result.begin(),result.end());
                }
            }else{
                result.push_back(s[i]);
            }
        }
        return result;
    }
};