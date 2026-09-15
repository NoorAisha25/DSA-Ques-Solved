class Solution {
public:
       int lowerb(vector<int>&arr , int k){
           int n = arr.size();
           int l = 0;
           int h = n - 1;
           int ans = n;

           while(l <= h){
            int m = l + (h - l)/2;

            if(arr[m] >= k){
                ans = m;
                h = m - 1;
            }
            else l = m  +1;
           }

           return ans;
       }

       int upperb(vector<int>&arr , int k){
           int n = arr.size();
           int l = 0;
           int h = n - 1;
           int ans = n;

           while(l <= h){
            int m = l + (h - l)/2;

            if(arr[m] > k){
                ans = m;
                h = m - 1;
            }
            else l = m  +1;
           }

           return ans;
       }

       vector<int> searchRange(vector<int>& nums, int target) {
       int lb = lowerb(nums , target);
       int ub = upperb(nums , target);

       if(lb == nums.size() || nums[lb] != target) return {-1,-1};
       return {lb , ub-1};
    }
};
