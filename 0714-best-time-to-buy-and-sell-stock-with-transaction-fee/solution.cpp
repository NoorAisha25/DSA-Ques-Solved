class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int profit = 0;
        int mini = prices[0];

        for(int i = 1 ; i < n ; i++){
            int cost = prices[i] - mini - fee;
            profit = max( profit , cost);
            mini = min( mini , prices[i] - profit);
        }
        return profit;
    }
};
