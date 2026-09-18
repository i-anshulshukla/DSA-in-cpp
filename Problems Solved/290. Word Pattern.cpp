class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        int len = s.length();
        int start = 0;


        for (int i = 0; i <= len; ++i) {
            if (i == len || s[i] == ' ') {
                if (start < i) {
                    words.push_back(s.substr(start, i - start));
                }
                start = i + 1;
            }
        }

        int n = pattern.length();
        if (n != words.size()) return false;


        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                bool charMatch = (pattern[i] == pattern[j]);
                bool wordMatch = (words[i] == words[j]);

                if (charMatch != wordMatch) {
                    return false;
                }
            }
        }

        return true;
    }
};
