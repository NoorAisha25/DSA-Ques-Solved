class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        long long x = 0;
        for(int i = 0 ; i < n ; i++){
            x ^= nums[i];
        }

        long long mask = x & (-x);
        int b1 = 0;
        int b2 = 0;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] & mask){
                b1 ^= nums[i];
            }
            else{
                b2 ^= nums[i];
            }
        }
        return {b1,b2};
    }
};
