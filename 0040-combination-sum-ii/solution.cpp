class Solution {
public:

    void solve(int i ,  vector<vector<int>> &ans , vector<int>&arr , int k , vector<int>&comb ){

        if( i > arr.size() || k < 0 ){
            return;
        }
        if(k == 0){
            ans.push_back(comb);
            return;
        }
        
        for(int j = i ; j < arr.size() ; j++){

            if(j > i && arr[j] == arr[j-1]) continue;
            //include
            comb.push_back(arr[j]);
            solve(j+1 , ans , arr, k-arr[j] , comb);
            //exclude
            comb.pop_back();
      }
    }
  
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
       
        sort(arr.begin() , arr.end());
        vector<vector<int>>ans;
        vector<int>comb;

        solve(0 , ans , arr , target , comb);
        return ans;
    }
};
