class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buyingPrice = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[buyingPrice] > prices[i]) {
                buyingPrice = i;
                continue;
            }
            maxProfit = max(maxProfit, prices[i] - prices[buyingPrice]);
        }
        return maxProfit;
    }
};