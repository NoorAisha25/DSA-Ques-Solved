class Solution {
public:
    set<vector<int>>st; 

    void solve(int i , vector<int>&arr, vector<int>&comb , vector<vector<int>> &ans , int k){
       
       if(i == arr.size() || k < 0){
        return ;
       }
       if(k == 0){
          if(st.find(comb) == st.end()){
            ans.push_back(comb);
            st.insert(comb);
          }
          return;
       }

        //single
        comb.push_back(arr[i]);
        solve(i+1 , arr, comb , ans ,k - arr[i]);
        //multiple
        solve(i , arr, comb , ans ,k - arr[i]);
        //exclude
        comb.pop_back();
        solve(i+1 , arr, comb , ans ,k);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        sort(arr.begin() , arr.end());
        vector<vector<int>> ans;
        vector<int> comb;

        solve( 0 , arr, comb , ans , target);
        return ans;
    }
};
