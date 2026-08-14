class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int profit = 0;

        for(int i = 1 ; i< n ; i++){
            if( arr[i] > arr[i-1]){
                int cost = arr[i] - arr[i-1];
                profit = profit + cost;
            }
        }
        return profit;
    }
};
