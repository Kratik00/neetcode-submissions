class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyingAmount = INT_MAX;
        int profit = 0;
        for (int i = 0; i < n; i++)
        {
            buyingAmount = min(buyingAmount, prices[i]);
            int curr_profit = prices[i] - buyingAmount;
            if (curr_profit > 0)
            {
                profit = max(curr_profit, profit);
            }
        }
        return profit;
        
    }
};
