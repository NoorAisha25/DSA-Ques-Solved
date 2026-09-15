class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        
        if(n == 1) return nums[0];
        if(nums[l] != nums[l+1]) return nums[l];
        if(nums[h] != nums[h-1]) return nums[h];

        while(l <= h){
            int m = l + (h - l)/2;

            if(nums[m] != nums[m-1] && nums[m] != nums[m+1]) return nums[m];


            if((m % 2 == 0 && nums[m] == nums[m-1] ) || (m % 2 == 1 && nums[m] == nums[m+1])) h = m -1;
            else l = m + 1;
        }

        return -1;
    } 
};
