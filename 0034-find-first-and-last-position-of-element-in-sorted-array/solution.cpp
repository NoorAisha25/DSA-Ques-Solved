class Solution {
public:
       int lowerB(vector<int>& nums, int target){
          int n = nums.size();
          int l = 0;
          int h = n - 1;   
          int ans = n;

          while( l <= h){
            int mid = l + (h - l)/2;

            if(nums[mid] >= target){
                ans = mid ;
                h = mid - 1;
            }
            else l = mid + 1;
          }
          return ans;
       }
        int upperB(vector<int>& nums, int target){
          int n = nums.size();
          int l = 0;
          int h = n - 1;   
          int ans = n;

          while( l <= h){
            int mid = l + (h - l)/2;

            if(nums[mid] > target){
                ans = mid ;
                h = mid - 1;
            }
            else l = mid + 1;
          }
          return ans;
       }
       vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerB(nums , target);
        int ub = upperB(nums , target);

        if(lb == nums.size() || nums[lb] != target) return {-1 , -1};
        return {lb , ub -1};  
    }
};
