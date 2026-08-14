class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        int hold = INT_MIN;
        int sold = 0;
        int rest = 0;

        for(int price : prices){
            int prevSold = sold;
            sold = hold + price;
            hold = max( hold , rest - price);
            rest = max( rest , prevSold);
        }
        return max(sold , rest);
        }
};
