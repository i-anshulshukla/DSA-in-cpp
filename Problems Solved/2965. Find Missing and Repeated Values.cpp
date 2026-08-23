class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size=grid.size();
        int subSize=grid[0].size();
        vector<int> diff;
        for(int i=0;i<size;i++){
            for(int j=0;j<subSize;j++){
                diff.push_back(grid[i][j]);
            }
        }
        sort(diff.begin(),diff.end());
        int a;
        int b;
        vector<int>final;
        for(int i=0;i<diff.size()-1;i++){
            if(diff[i]==diff[i+1]){
                a=diff[i];
                final.push_back(a);
                break;
            }
        }
        for(int i=0;i<diff.size()-1;i++){
            if(diff[i+1]-diff[i]>1){
                b=diff[i]+1;
                final.push_back(b);
                break;
            }else if(i==diff.size()-2&&diff[diff.size()-1]!=diff.size()){
                b=diff.size();
                final.push_back(b);
            }else if(i==diff.size()-2&&diff[diff.size()-1]==diff.size()){
                b=1;
                final.push_back(b);
            }
        }
        return final;
    }
};