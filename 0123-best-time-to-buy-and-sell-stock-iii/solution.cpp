class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>buy(3 , INT_MIN);
        vector<int>sell(3 , 0);

        for(int i = 0 ; i<n ; i++){
            for(int t = 1 ; t <= 2 ; t++){
                buy[t] = max( buy[t] , sell[t-1] - prices[i]);
                sell[t] = max( sell[t] , buy[t] + prices[i]);
            }
        }
        return sell[2];
    }
};
