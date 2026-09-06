class Solution {
public:
    void solve(int i , vector<int>& arr, int k , vector<vector<int>>& res, vector<int>& comb){

        if(i > arr.size() || k < 0) return;

        if(k == 0){
            res.push_back(comb);
            return;
        }

        for(int j = i ; j < arr.size() ; j++){
            if(j > i && arr[j] == arr[j-1]) continue;

            comb.push_back(arr[j]);
            solve(j + 1, arr, k - arr[j] , res, comb);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<vector<int>>res;
        vector<int>comb;
        sort(arr.begin() , arr.end());

        solve(0 , arr , target , res ,comb);
        return res;
    }
};
