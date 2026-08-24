class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int x_r = 0;
       for(int i = 0 ; i < nums.size() ; i++){
          x_r ^= nums[i];
       }
       return x_r;
    }
};
