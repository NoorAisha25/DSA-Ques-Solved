class Solution {
public:
    set<vector<int>>st;
    void solve(int i ,vector<vector<int>>&ans , vector<int>&comb ,vector<int>& arr, int k ){
        if(i >= arr.size() || k < 0) return;

        if(k == 0){
            if(st.find(comb) == st.end()){
                ans.push_back(comb);
                st.insert(comb);
            }
            return;
        }

        comb.push_back(arr[i]);
        solve(i + 1 , ans , comb , arr , k - arr[i]);
        solve(i , ans , comb , arr , k - arr[i]);
        comb.pop_back();

        solve(i + 1 , ans , comb , arr , k);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>comb;
        solve(0 , ans , comb , arr ,target);
        return ans;
    }
};
