class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n-1;
        
        while(l <= h){
            int mid = l + (h-l)/2;
            if(nums[l] <= nums[h]) return nums[l];
            if(nums[mid] <= nums[h]) 
            {
                
                h = mid ;
            }    
            else l = mid + 1;
        }
        return nums[l];
    } 
};
