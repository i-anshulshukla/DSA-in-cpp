class Solution {
public:
    int minOperations(string s) {
        int count01 = 0; // Cost to match "010101..."
        int n = s.length();
        
        for(int i = 0; i < n; i++) {
            // In "0101...", even positions must be '0', odd positions must be '1'
            if (i % 2 == 0) {
                if (s[i] != '0') count01++;
            } else {
                if (s[i] != '1') count01++;
            }
        }
        
        // The cost for the opposite pattern "101010..." is always (n - count01)
        return min(count01, n - count01);
    }
};