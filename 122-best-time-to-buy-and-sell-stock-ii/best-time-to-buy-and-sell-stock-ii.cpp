class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int hold = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>hold){
                profit += prices[i] - hold;
                hold = prices[i];
            }
            else if(hold>prices[i]){
                hold = prices[i];              
            }

        }

        return profit;
    }
};