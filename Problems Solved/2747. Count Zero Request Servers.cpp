class Solution {
public:
    vector<int> makeAnArray(int number){
        vector<int> arr;
        for(int i=1;i<=number;i++){
            arr.push_back(i);
        }
        return arr;
    }

    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        vector<int> count;
        for(int i=0;i<queries.size();i++){
            int start=queries[i]-x;
            int end=queries[i];
            vector<int> temp;
            temp=makeAnArray(n);
            for(int j=0;j<logs.size();j++){
                
                if(logs[j][1]>=start&&logs[j][1]<=end){
                    for(int k=0;k<temp.size();k++){
                        if(k==logs[j][0]){
                            temp.erase(temp.begin()+k);
                        }
                    }
                }

            }
            count.push_back(temp.size());
        }
        return count;
    }
};