class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int sell=prices[0];
        int profit=0;
        int finalProfit=0;
        if(prices.size()==2&&prices[1]>prices[0]){
            return prices[1]-prices[0];
        }else if(prices.size()==2&&prices[1]<=prices[0]){
            return 0;
        }else if(prices.size()==3){
            return max(prices[1],prices[2])-min(prices[0],prices[1]);
        }
        for(int i=1;i<prices.size()-1;i++){
            if(prices[i-1]<=prices[i]&&prices[i+1]>=prices[i]&&prices[i-1]<buy){
                buy=prices[i-1];
            }else if(prices[i-1]>=prices[i]&&prices[i]<=prices[i+1]&&prices[i]<=buy){
                buy=prices[i];
                sell=prices[i+1];
                if(i+1==prices.size()-1){
                profit=sell-buy;
                finalProfit+=profit;
                profit=0;
                buy=prices[i+1];
            }
            }else if(prices[i-1]<=prices[i]&&prices[i]>=prices[i+1]&&prices[i]>buy){
                sell=prices[i];
                profit=sell-buy;
                finalProfit+=profit;
                profit=0;
                buy=prices[i+1];
            }else if(prices[i-1]<=prices[i]&&prices[i+1]>=prices[i]&&i+1==prices.size()-1){
                sell=prices[i+1];
                profit=sell-buy;
                finalProfit+=profit;
            }
        }
        return finalProfit;
    }
};