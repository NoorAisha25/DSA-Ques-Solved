class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> buy( 3 , INT_MIN);
        vector<int> sell(3 , 0);

        for(int price : prices){
            for( int t = 1 ; t <= 2 ; t++){
                buy[t] = max( buy[t] , sell[t-1] - price);
                sell[t] = max( sell[t] , buy[t] + price);
            }
        }
        return sell[2];
    }
};
