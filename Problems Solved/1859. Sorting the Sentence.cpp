class Solution {
public:
    string sortSentence(string s) {
        char search='1';
        string sorted;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == search) {

                int start = 0;
                for (int j = i - 1; j >= 0; j--) {
                    if (s[j] == ' ') {
                        start = j + 1;
                        break;
                    }
                }
                

                for (int k = start; k < i; k++) {
                    sorted.push_back(s[k]);
                }
                sorted.push_back(' ');
                
                search++;
                i = -1;
            }
        }

        if (!sorted.empty()) {
            sorted.pop_back();
        }
        
        return sorted;
    }
};
