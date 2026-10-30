class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int n = prices.size();
        for (int i = 0; i < n-1; i++)
        {
            int profit = prices[i+1] - prices[i];
            if (profit > 0)
                max += profit;
        }
        return max;
    }
};