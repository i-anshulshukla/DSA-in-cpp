class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int poisoned=duration;
        for(int i=0;i<timeSeries.size()-1;i++){
            if(timeSeries[i+1]-timeSeries[i]>=duration){
                poisoned+=duration;
            }else{
                poisoned+=timeSeries[i+1]-timeSeries[i];
                }
        }
        return poisoned;
    }
};