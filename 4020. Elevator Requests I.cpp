class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int current=0;
        int totalTimeTaken=0;
        for(int i=0;i<requests.size();i++){
            if(current<=requests[i]){
            totalTimeTaken+=(requests[i]-current);
            current=requests[i];
        }else{
             totalTimeTaken+=(current-requests[i]);
            current=requests[i];   
        }
    }
    
    return totalTimeTaken; 
    }
};