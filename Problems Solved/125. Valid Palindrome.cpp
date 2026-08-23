class Solution {
public:
    bool isAlphaNum(char ch) {
        return (ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z') || 
               (ch >= '0' && ch <= '9');
    }

public:
    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;
        
        while (st < end) {
            // Skip non-alphanumeric characters from the front
            if (!isAlphaNum(s[st])) {
                st++;
                continue;
            }
            // Skip non-alphanumeric characters from the back
            if (!isAlphaNum(s[end])) {
                end--;
                continue;
            }
            
            // Compare lowercase values
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            
            // Move both pointers inward
            st++;
            end--;
        }
        
        return true;
    }
};