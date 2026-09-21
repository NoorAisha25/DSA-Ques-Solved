class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int res = n;

        while(l <= h){
           int m = l + (h-l)/2;

           if(nums[m] >= target){
             res = m;
             h = m - 1;
           }
           else {
            l = m + 1;
           }
        }
        return res;
    }
};
