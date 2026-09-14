class Solution {
public:
    
    // void solve( int i , vector<vector<int>> &ans , vector<int>&arr , vector<int>&comb){

    //     ans.push_back(comb);

    //     for(int j = i ; j < arr.size() ; j++){
    //         if(j > i && arr[j] == arr[j-1]) continue;

    //         comb.push_back(arr[j]);
    //         solve(j+1 , ans , arr ,comb);
    //         comb.pop_back();
    //     }
    // }
    //    vector<vector<int>> ans;
    //    vector<int>comb ; 
    //    sort(nums.begin() , nums.end());

    //    solve(0 , ans , nums , comb);

    //    return ans;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int subset = 1 << n;
        set<vector<int>>st;

        for(int i = 0 ; i < subset ; i++){
            vector<int>temp;
            for(int j = 0 ; j < n ; j++){
                if(i & (1 << j)) temp.push_back(nums[j]);
            }
            st.insert(temp);
        }

        return vector<vector<int>>(st.begin() , st.end());
    }
};
