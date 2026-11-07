class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string concat;
        for(int i=0;i<words.size();i++){
            int sumOfWord=0;
            for(int j=0;j<words[i].length();j++){
            sumOfWord+=weights[words[i][j]-97];
        }
        concat.push_back(122-(sumOfWord%26));
    }
    return concat;
}

};