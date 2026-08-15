class Solution {
public:
    
    void solve( int i , vector<vector<int>> &ans , vector<int>&arr , vector<int>&comb){

        ans.push_back(comb);

        for(int j = i ; j < arr.size() ; j++){
            if(j > i && arr[j] == arr[j-1]) continue;

            comb.push_back(arr[j]);
            solve(j+1 , ans , arr ,comb);
            comb.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       
       vector<vector<int>> ans;
       vector<int>comb ; 
       sort(nums.begin() , nums.end());

       solve(0 , ans , nums , comb);

       return ans;
    }
};
