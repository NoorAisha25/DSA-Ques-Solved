class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0 , h = n - 1;

        while( l <= h){

            if (nums[l] <= nums[h]) return nums[l];
            
            int m = (l + h )/2;
            if( nums[m] <= nums[h]) h = m;
            else l = m + 1; 
        }
        return nums[l];
    } 
};
