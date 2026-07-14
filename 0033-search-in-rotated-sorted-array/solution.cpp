class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0 ; 
        int h = n - 1;

        while(l <= h){

            int mid = ( l + h )/2;
            
            if (nums[mid] == target) return mid;
            // 1st half 
            if( nums[l] <= nums[mid]){

                if( nums[l] <= target && target <= nums[mid]) {h = mid -1;}
                else {l = mid + 1;}
            }
            // 2nd half
            else{
                if (nums[mid] <= target && target <= nums[h]) {l = mid + 1;}
                else {h = mid - 1;}
            }
        }

        return -1;
    }
};
