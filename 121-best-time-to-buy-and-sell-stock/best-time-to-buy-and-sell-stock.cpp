class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> sellDay(n);

        sellDay[0] = INT_MAX;

        for(int i=1;i<n;i++){
            sellDay[i] = min(sellDay[i-1],prices[i-1]);
        }

        int maxProfit = 0;

        for(int i=0;i<n;i++){
            prices[i] = prices[i] - sellDay[i];
            maxProfit = max(prices[i], maxProfit);
        }

        return maxProfit;
    }
};