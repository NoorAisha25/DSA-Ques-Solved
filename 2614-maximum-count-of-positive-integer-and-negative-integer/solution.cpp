class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int m = nums.size();
        int p = 0;
        int n = 0;
        int maxi = 0;

        for(int i = 0 ; i < m ; i++){
            if(nums[i] < 0) n++;
            if(nums[i] > 0) p++;

            if(p>n) maxi = max(maxi , p);
            else maxi = max(maxi , n);
        }

        return maxi;
    }
};
