class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int mini1 = INT_MAX;
        int mini2 = INT_MAX;
        int profit1 = 0;
        int profit2 = 0;

        if (n == 0) return 0;

        for(int i = 0 ; i < n ; i++){
            mini1 = min(mini1 , arr[i]);
            profit1 = max(profit1 , arr[i] - mini1);

            mini2 = min(mini2 , arr[i] - profit1);
            profit2 = max(profit2 , arr[i] - mini2);
        }
        return profit2 ;
    }
};
