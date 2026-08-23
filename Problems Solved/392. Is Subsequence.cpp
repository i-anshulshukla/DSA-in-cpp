class Solution {
public:
    bool isSubsequence(string s, string t) {
        int searchFor=0;
        if(s.length()==0){
            return true;
        }
        for(int i=0;i<t.length();i++){
            if(t[i]==s[searchFor]){
                if(searchFor==s.length()-1){
                    return true;
                }
                searchFor++;
            }else if(i==t.length()-1){
                return false;
            }
        }
        
        return false;
    }
};