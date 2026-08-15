class Solution {
public:
    set<vector<int>>s;

    void solve(int i ,  vector<vector<int>> &ans , vector<int>&arr , int k , vector<int>&comb ){

        if( i == arr.size() || k < 0 ){
            return;
        }
        if(k == 0){
            if(s.find(comb) == s.end()){
                ans.push_back(comb);
                s.insert(comb);
            }
            return;
        }
        //single ele
        comb.push_back(arr[i]);
        solve(i+1 , ans , arr, k-arr[i] , comb);

        //multiple
        solve(i , ans , arr ,k-arr[i] , comb);

        //exclude
        comb.pop_back();
        solve(i+1 , ans , arr, k , comb);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        sort(arr.begin() , arr.end());
        vector<vector<int>>ans;
        vector<int>comb;

        solve(0 , ans , arr , target , comb);
        return ans;
    }
};
