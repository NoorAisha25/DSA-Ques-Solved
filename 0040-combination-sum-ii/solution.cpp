class Solution {
public:

    void solve(int i , vector<int>&arr, vector<int>&comb , vector<vector<int>> &ans , int k){
       
       if( k < 0){
        return ;
       }
       if(k == 0){
            ans.push_back(comb);
            return;
       }
        for (int j = i; j < arr.size(); j++) {
            if( j > i && arr[j] == arr[j-1]) continue;

            comb.push_back(arr[j]);
            solve(j + 1, arr,comb , ans ,k - arr[j]); 
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
       
        vector<vector<int>> ans;
        vector<int> comb;
        sort(arr.begin() , arr.end());
        solve( 0 , arr, comb , ans , target);
        return ans;
    }
};
