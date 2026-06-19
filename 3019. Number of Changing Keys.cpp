class Solution {
public:
    int countKeyChanges(string s) {
        int changeKey = 0;
        for(int i = 1; i < s.length(); i++) {
            if (s[i-1] != s[i] && s[i-1] != s[i]-32 && s[i-1] != s[i]+32) {
                changeKey += 1;
            }
        }
        return changeKey;
    }
};