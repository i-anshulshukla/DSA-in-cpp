class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m = queries.size();
        
        
        sort(logs.begin(), logs.end(), [](const auto& a, const auto& b) {
            return a[1] < b[1];
        });
        
        
        vector<vector<int>> qs(m, vector<int>(2));
        for (int i = 0; i < m; ++i) {
            qs[i] = {queries[i], i};
        }
        sort(qs.begin(), qs.end());
        
        unordered_map<int, int> active_servers; 
        vector<int> ans(m);
        int j = 0, k = 0;
        
        
        for (int i = 0; i < m; ++i) {
            int r = qs[i][0];
            int original_idx = qs[i][1];
            int l = r - x;
            
            
            while (k < logs.size() && logs[k][1] <= r) {
                active_servers[logs[k][0]]++;
                k++;
            }
            
           
            while (j < logs.size() && logs[j][1] < l) {
                active_servers[logs[j][0]]--;
                if (active_servers[logs[j][0]] == 0) {
                    active_servers.erase(logs[j][0]);
                }
                j++;
            }
            
            
            ans[original_idx] = n - active_servers.size();
        }
        
        return ans;
    }
};
