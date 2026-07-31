class Solution {
public:
    int pos(vector<int>& nums, int mid){

        int subarrays = 1 ;
        int cumSum = 0;

        for(int i = 0 ; i<nums.size() ; i++){
            cumSum += nums[i];

            if(cumSum > mid){
                subarrays++;
                cumSum = nums[i];
            }
        }
        return subarrays;
    }
    int func(vector<int>& nums, int k){

        int n = nums.size();
        int l = *max_element(nums.begin() , nums.end());
        int h = accumulate(nums.begin() , nums.end(), 0);
        int ans = -1;
        while( l <= h){
            
            int mid = l + ( h - l)/2;
            int possAns = pos(nums , mid);

            if(possAns <= k){
                ans = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;

    }
    int splitArray(vector<int>& nums, int k) {
        return func(nums, k);
    }
};
