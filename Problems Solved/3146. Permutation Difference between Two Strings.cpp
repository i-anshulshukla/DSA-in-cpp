class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            char initialCheck=s[i];
            int initialIdx=i;
            for(int j=0;j<t.length();j++){
                if(t[j]==initialCheck){
                    char permutationCheck=t[j];
                    int permutationIdx=j;
                    int absoluteDifference=permutationIdx-initialIdx;
                    if(absoluteDifference<0){
                absoluteDifference*=-1;
                
            }
            sum+=absoluteDifference;
            break;
                }
            }
        }
        return sum;
    }
};