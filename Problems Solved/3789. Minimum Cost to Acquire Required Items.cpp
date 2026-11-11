class Solution {
public:
    long long minimumCost(long long cost1, long long cost2, long long costBoth, long long need1, long long need2) {
        long long purchase=0;
        if(need1==0&&need2==0){
            return 0;
        }
        if(costBoth<=cost1+cost2){
            long long x=min(need1,need2);
            purchase+=costBoth*x;
            need1-=x;
            need2-=x;
            if(need1>0){
                if(costBoth<cost1){
                    purchase+=costBoth*need1;
                }else{
                    purchase+=cost1*need1;
                }
            }else if(need2>0){
                if(costBoth<cost2){
                    purchase+=costBoth*need2;
                }else{
                    purchase+=cost2*need2;
                }
            }
        }else{
            purchase+=need1*cost1+need2*cost2;
        }
        return purchase;
    }
};