class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int maxi = nums[0];
        for(int i = 0 ; i < n ; i++){
            int ans = nums[i];
            maxi = max(maxi , ans);
            for(int j = i+1 ; j < n ; j++){
                ans = ans * nums[j];
                maxi = max(maxi , ans);
            }
        }
        return maxi;
    }
};
