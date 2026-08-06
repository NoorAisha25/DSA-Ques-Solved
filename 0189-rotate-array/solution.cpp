class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp;
        k = k % n;      // here remain alert
        for(int i = n-k ; i< n ; i++){ // here choose wisely
            temp.push_back(nums[i]);
        }
        for(int i = n-1 ; i >= k ; i -- ){
            nums[i] = nums[i - k];
        }
        for(int i = 0 ; i < k ; i++){
            nums[i] = temp[i];
        }
    }
};
