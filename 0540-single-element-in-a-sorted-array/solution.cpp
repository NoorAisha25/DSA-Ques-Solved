class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        int l = 0 ;
        int h = n - 1;

        if(n==1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-1]) return nums[n-1];

        while( l <= h){

            int m = (l+h)/2;

            if( nums[m] != nums[m-1] && nums[m] != nums[m+1]) return nums[m];
         //eliminating right half whether even or odd
            if( ( m%2 == 1  && nums[m] == nums[m-1]) || (m%2 == 0  && nums[m] == nums[m+1])) l = m+1;
            // eliminating left half
            else h = m - 1;
        }
        return -1;
    } 
};
