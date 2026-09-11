class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int maxOne = 0;
        int zero = 0;

        while(r < n){
            if(nums[r] == 0) zero++;

            if(zero <= k){
                maxOne = max( maxOne , r - l + 1);
            }

            if(zero > k){
                if(nums[l] == 0){
                    zero--;
                }
                l++;
            }
            r++;
        }
        return maxOne;
    }
};
