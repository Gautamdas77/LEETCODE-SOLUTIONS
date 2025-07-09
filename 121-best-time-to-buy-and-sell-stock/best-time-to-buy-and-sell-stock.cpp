class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost = prices[0];
        int profit = 0;
        int n = prices.size();
        for(int i=0;i<n;i++){
            int sell = prices[i] - cost;
            profit = max(profit,sell);
            cost = min(cost,prices[i]);
        }
        return profit;
    }
};