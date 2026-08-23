class Solution {
public:
    int numDifferentIntegers(string word) {
        vector<string> vec;
        string str;
        bool isPresent = false;
        int differentInt = 0;
        

        for(int i = 0; i < word.length(); i++) {
            if(word[i] >= '0' && word[i] <= '9') {
                str.push_back(word[i]);
                isPresent = true;
            } else if(isPresent == true) {

                int nz = 0;
                while (nz < str.length() - 1 && str[nz] == '0') {
                    nz++;
                }
                vec.push_back(str.substr(nz));
                
               
                str.clear(); 
                isPresent = false;
            }
        }
        
       
        if(isPresent == true) {
            int nz = 0;
            while (nz < str.length() - 1 && str[nz] == '0') {
                nz++;
            }
            vec.push_back(str.substr(nz));
        }
        
        if(vec.empty()) return 0;
        
        sort(vec.begin(), vec.end());
        
        differentInt = 1; 
        for(int i = 1; i < vec.size(); i++) {
            if(vec[i] != vec[i - 1]) {
                differentInt += 1;
            }
        }
        
        return differentInt;
    }
};