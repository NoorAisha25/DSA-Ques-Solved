class Solution {
public:
    void solve(int i ,vector<vector<int>>&ans , vector<int>&comb ,int n, int k ){
        if(k < 0) return;

        if(k == 0 && n == 0){
            ans.push_back(comb);
            return;
        }

        for(int j = i ; j < 10 ; j++){
            comb.push_back(j);
            solve(j + 1 , ans , comb , n - j , k - 1);
            comb.pop_back();
        } 
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>comb;
        solve(1 , ans , comb , n , k);
        return ans;
    }
};
