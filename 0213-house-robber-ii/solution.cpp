class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0] , nums[1]);

        vector<int>a(n);
        a[1] = nums[1];
        a[2] = max(nums[1] , nums[2]);

        for(int i = 3 ; i < n ; i++){
            a[i] = max( a[i-1] , a[i-2] + nums[i]);
        }
        int case1 = a[n-1];

        vector<int>b(n);
        b[0] = nums[0];
        b[1] = max(nums[1] , nums[0]);

        for(int i = 2 ; i < n - 1 ; i++){
            b[i] = max( b[i-1] , b[i-2] + nums[i]);
        }
        int case2 = b[n-2];

        return max(case1 , case2);
    }
};
