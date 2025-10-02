class Solution {
public:
    int lowerb(vector<int>& nums, int target){
        int n = nums.size();
        int l = 0 , h = n -1;
        int ans = n ;
        while( l <= h){
            int m = (l + h)/2;
            if(nums[m] >= target){
                ans = m;
                h = m - 1;
            }
            else l = m + 1;
        } return ans;
    }
    int upperb(vector<int>& nums , int target){
        int n = nums.size();
        int l = 0 , h = n -1;
        int ans = n ;
        while( l <= h){
            int m = (l + h)/2;
            if(nums[m] > target){
                ans = m;
                h = m - 1;
            }
            else l = m + 1;
        } return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       int lb = lowerb(nums , target);
       if( lb == nums.size() || nums[lb] !=target) return {-1 ,-1};
       int ub = upperb(nums , target);
       return {lb , ub-1};
    }
};
