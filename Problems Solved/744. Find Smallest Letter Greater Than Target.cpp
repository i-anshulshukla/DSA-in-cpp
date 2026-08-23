class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // Scan the sorted array from the very beginning
        for(int i = 0; i < letters.size(); i++) {
            // The first element greater than target is our answer
            if(letters[i] > target) {
                return letters[i];
            }
        }
        
        // If no element is greater, wrap around to the first element
        return letters[0];
    }
};