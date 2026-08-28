class Solution {
public:
    void solve(int i ,vector<int>& arr, vector<vector<int>> &res ,vector<int>&comb , int target ){
        
        if(i > arr.size() || target < 0) return;
        
        if(target == 0){
            res.push_back(comb);
            return;
        }
        
        for(int j = i ; j < arr.size() ; j++){
            if( j > i && arr[j] == arr[j-1]) continue;

            comb.push_back(arr[j]);
            solve(j+1 , arr , res , comb , target-arr[j]);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin() , arr.end());
        vector<vector<int>> res;
        vector<int>comb;

        solve(0 , arr , res , comb , target);
        return res;
    }
};
