class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = INT_MIN;
        int minCost = INT_MAX;
        if(n == 1){
            return 0;
        }
        for(int i = 1; i < n; i++){
            if(i == 1){
                minCost = min(prices[i], prices[i - 1]);
            }
            else{
                minCost = min(prices[i], minCost);
            }
            
            int profit = prices[i] - minCost;
            maxProfit = max(profit, maxProfit);
        }

        return maxProfit;
    }
};