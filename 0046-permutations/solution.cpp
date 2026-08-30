class Solution {
public:
    // void nextpermutation(vector<int>&nums){
    //     int n = nums.size();
    //     int idx = -1;

    //     for(int i = n-1 ; i > 0 ; i--){
    //         if(nums[i] > nums[i-1]){
    //             idx = i-1;
    //             break;
    //         }
    //     }

    //     if(idx != -1){
    //         int swp = idx ;
    //         for(int j = n-1; j > idx ; j--){
    //             if(nums[j] > nums[swp]){
    //                 swp = j ;
    //                 break;
    //             }
    //         }
    //         swap(nums[idx] , nums[swp]);
    //     }
    //     reverse(nums.begin() + idx + 1 , nums.end());
    // }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin() , nums.end());
        do{
            res.push_back(nums);
        }
        while(next_permutation(nums.begin() , nums.end()));
        return res;
    }
};
