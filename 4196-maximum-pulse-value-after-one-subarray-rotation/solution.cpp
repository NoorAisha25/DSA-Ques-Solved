class Solution {
public:
    long long maxValue(vector<int>& nums) {
        long long ans = 0;
        long long sum = 0;
        int n = nums.size();

        long long mx[2] = {LLONG_MIN , 0};

        for(int i = 0 ; i < n ; i++){

            if(i % 2 == 0) sum += nums[i];
            else sum -= nums[i];

            if(mx[i%2] != LLONG_MIN){
                ans = max(ans , 2 * (mx[i%2] - sum));
            }

            mx[i%2] = max(mx[i%2] , sum);
        }
        return sum + ans;
    }
};
