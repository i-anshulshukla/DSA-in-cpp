class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int longestTime=events[0][1];
        int longestIndex=events[0][0];
        for(int i=1;i<=events.size()-1;i++){
            if(events[i][1]-events[i-1][1]>longestTime){
                longestTime=events[i][1]-events[i-1][1];
                longestIndex=events[i][0];
            }else if(events[i][1]-events[i-1][1]==longestTime){
                longestIndex=min(events[i][0],longestIndex);
            }
        }
        return longestIndex;
    }
};