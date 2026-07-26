class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        
        if(nums.size() == 1) return nums[0];
        if(nums[l] != nums[l+1]) return nums[l];
        if(nums[h] != nums[h-1]) return nums[h];

        while(l <= h){

            int mid = l + ( h - l )/2;

            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) return nums[mid];

            else if( (mid % 2 == 0 && nums[mid] == nums[mid-1]) || (mid % 2 == 1 && nums[mid] == nums[mid+1])){
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return -1;
    } 
};
