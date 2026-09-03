class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;

        while(l <= h){
            int m = l + (h - l)/2;
            if(nums[l] <= nums[h]) return nums[l];

            if(nums[m] <= nums[h]){
                h = m;
            }
            else l = m + 1;
        }
        return nums[l];
    } 
};
