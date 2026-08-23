class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count = 0;
        string repeatedWord = word;
        
        while (sequence.find(repeatedWord) != string::npos) {
            count++;
            repeatedWord += word; 
        }
        
        return count;
    }
};