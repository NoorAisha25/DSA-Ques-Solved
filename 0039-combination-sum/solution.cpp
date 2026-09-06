class Solution {
public:
    set<vector<int>>st;
    void solve(int i ,vector<int>& arr, int k ,vector<vector<int>>& res ,vector<int>& comb ){
          
          if(i == arr.size() || k < 0) return;
          if(k == 0){
            if(st.find(comb) == st.end()){
                res.push_back(comb);
                st.insert(comb);
            }
            return;
          }
          
          comb.push_back(arr[i]);
          solve(i + 1 , arr , k - arr[i] , res, comb);
          solve(i  , arr , k - arr[i] , res, comb);
          comb.pop_back();

          solve(i+1 , arr , k , res , comb);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        sort(arr.begin() ,arr.end());
        vector<vector<int>>res;
        vector<int>comb;
        solve(0 , arr, target , res, comb);
        return res;
    }
};
