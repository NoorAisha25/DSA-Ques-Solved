class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minval = INT_MAX;
        int maxval = INT_MIN;

        int mini = -1;
        int maxi = -1;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] < minval){
                minval = nums[i];
                mini = i;
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(nums[i] > maxval){
                maxval = nums[i];
                maxi = i;
            }
        }

        int left = min(mini , maxi);
        int right = max(mini , maxi);

        int opt1 = right + 1;
        int opt2 = (left + 1) + (n - right);
        int opt3 = n - left;

        return min({opt1 , opt2 , opt3});
    }
};
