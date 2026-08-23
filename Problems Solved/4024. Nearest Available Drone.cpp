class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int answer=INT_MAX;
        int index=-1;
        for(int i=0;i<drones.size();i++){
        int sum=0;
        if(drones[i][0]-target[0]<0){
            sum+=(drones[i][0]-target[0])*-1;
        }else {
            sum+=drones[i][0]-target[0];
        }
         if(drones[i][1]-target[1]<0){
            sum+=(drones[i][1]-target[1])*-1;
        }else {
            sum+=drones[i][1]-target[1];
        }
        if(sum<=drones[i][2]&&sum<answer){
            answer=sum;
            index=i;
        }
    }
        return index;
    }
};