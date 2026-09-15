class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = -1;
        for(int j = i + 1 ; j < n ; j++){
            if(nums[j] != 0){
                swap(nums[i+1] , nums[j]);
                i++;
            }
        }
    }
};
