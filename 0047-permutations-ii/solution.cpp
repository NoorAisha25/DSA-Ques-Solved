class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>>seen;

        sort(nums.begin(), nums.end());
        do{
            seen.insert(nums);
        } while(next_permutation(nums.begin() , nums.end()));

        for(auto &perm : seen){
            res.push_back(perm);
        }
        return res;
    }
};
