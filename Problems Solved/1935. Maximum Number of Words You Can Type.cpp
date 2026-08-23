class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int words = 0;
        int lastSpace = -1;
        for (int i = 0; i < text.length(); i++) {
            if (i == text.length() - 1) {
                words += 1;
                int toCheck = true;
                for (int j = 0; j < brokenLetters.length() && toCheck == true; j++) {
                    for (int k = lastSpace + 1; k <= i && toCheck == true; k++) {
                        if (text[k] == brokenLetters[j]) {
                            words -= 1;
                            toCheck = false; 
                        }
                    }
                }
            }
            if (text[i] == ' ') {
                words += 1;
                int toCheck = true;
                for (int j = 0; j < brokenLetters.length() && toCheck == true; j++) {
                    for (int k = lastSpace + 1; k < i && toCheck == true; k++) {
                        if (text[k] == brokenLetters[j]) {
                            words -= 1;
                            toCheck = false; 
                        }
                    }
                }
                lastSpace = i;
            }
        }
        return words;
    }
};