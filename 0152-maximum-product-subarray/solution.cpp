class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int currmin = nums[0];
        int currmax= nums[0];
        int maxi = nums[0];

        for(int i = 1 ; i < n ; i++){
            int temp = max({nums[i] , nums[i] * currmin , nums[i] * currmax});
            currmin = min({nums[i] , nums[i] * currmin , nums[i] * currmax});
            currmax = temp;
            maxi = max( maxi , currmax);
        }
        return maxi;
    }
};
