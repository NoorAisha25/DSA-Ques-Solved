class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int currmax = nums[0];
        int currmin = nums[0];
        int maxi = nums[0];

        for(int i = 1 ; i < n ; i++){
            int temp = max({ nums[i] , currmax*nums[i] , currmin * nums[i]});
            currmin = min({nums[i] , currmin*nums[i] , currmax * nums[i]});
            currmax = temp;
            maxi = max( maxi , currmax);
        }
        return maxi;
    }
};
