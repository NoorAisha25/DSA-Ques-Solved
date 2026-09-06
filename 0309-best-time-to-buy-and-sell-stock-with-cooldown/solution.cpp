class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = INT_MIN;
        int sell = 0;
        int rest = 0;
        for(int i = 0 ; i < n ; i++){
            int prevsell = sell;
            sell = buy + prices[i];
            buy = max( buy ,  rest - prices[i]);
            rest = max(rest , prevsell);
        }
        return max(sell , rest);
    }
};
