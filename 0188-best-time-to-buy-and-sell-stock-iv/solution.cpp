class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<int>buy(k+1 , INT_MIN);
        vector<int>sell(k+1 , 0);

        for(int i = 0 ; i <n ; i++){
            for(int t = 1 ; t <= k ; t++){
                buy[t] = max( buy[t] , sell[t-1] - prices[i]);
                sell[t] = max( sell[t] , buy[t] + prices[i]); 
            }
        }
        return sell[k];
    }
};
