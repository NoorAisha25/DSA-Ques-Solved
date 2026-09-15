class Solution {
public:
    int func(vector<int>& nums, int m){
        int sum = 0;
        int cnt = 1;

        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];

            if(sum > m){
                cnt++;
                sum = nums[i];
            }
        }
        return cnt;
    }
    int solve(vector<int>& nums, int k){
        int n = nums.size();
        int l = *max_element(nums.begin() , nums.end());
        int h = accumulate(nums.begin() , nums.end() , 0);
        int mini = -1;

        while(l <= h){
            int m = l + (h - l)/2;

            int pos = func(nums, m);
            if(pos <= k){
                mini = m;
                h = m - 1;
            }
            else l = m + 1;
        }
        return mini;
    }
    int splitArray(vector<int>& nums, int k) {
        return solve(nums , k);
    }
};
