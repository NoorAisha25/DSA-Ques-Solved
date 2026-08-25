class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        long x = 0;
        for(int i = 0 ; i < n ; i++){
            x ^= nums[i];
        }

        long mask = (x & (-x));
        int a = 0 ; int b = 0;
        for(int i : nums){
            if(mask & i){
                b ^= i;
            }
            else{
                a ^= i;
            }
        }
        return {a , b};
    }
};
