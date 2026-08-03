class Solution {
public:
    void solve(int i , vector<int>& nums , vector<vector<int>>&ans , vector<int>& comb ){

            ans.push_back(comb);

        for(int j = i ; j<nums.size() ; j++){
            if(j>i && nums[j] == nums[j-1]) continue;
            comb.push_back(nums[j]);
            solve(j + 1 ,nums, ans , comb );
            comb.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> comb;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        solve(0 , nums, ans , comb );
        return ans;
    }
};
