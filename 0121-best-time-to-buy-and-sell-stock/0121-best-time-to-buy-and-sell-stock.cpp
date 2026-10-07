class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Maxprofit = 0 , Bestbuy = prices[0];

        for(int i = 1; i<prices.size(); i++){
            if(prices[i]>Bestbuy){
                Maxprofit = max(Maxprofit,prices[i]-Bestbuy);
            }

            Bestbuy = min(Bestbuy,prices[i]);
        }
        return Maxprofit;
    }
};