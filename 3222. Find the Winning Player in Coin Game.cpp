class Solution {
public:
    string winningPlayer(int x, int y) {
        int round=0;
        string winner="Bob";
        while(x>=1&&y>=4){
            if(round%2==0){
            winner="Alice";
            }else{winner="Bob";
            }
            x=x-1;
            y=y-4;
            round+=1;
        }
        return winner;
    }
};