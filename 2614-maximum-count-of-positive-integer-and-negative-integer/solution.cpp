class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0 ;
        int maxi = 0;
        int n = nums.size();

        for(int i = 0; i<n ; i++){

            if(nums[i] < 0) cnt1++;

            if (nums[i] > 0) cnt2 ++;
            if (cnt1 > cnt2) maxi = max(maxi , cnt1);
            else maxi = max( maxi , cnt2);
        }
        return maxi;
    }
};
