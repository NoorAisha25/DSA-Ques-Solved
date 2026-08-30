class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int hold = INT_MIN;
        int sold = 0;
        int rest = 0;

        for(int i = 0 ; i < n ; i++){
            int prevSold = sold;
            sold = hold + prices[i];
            hold = max( hold , rest - prices[i]);
            rest = max(rest , prevSold);
        }
        return max(sold , rest);
    }
};
