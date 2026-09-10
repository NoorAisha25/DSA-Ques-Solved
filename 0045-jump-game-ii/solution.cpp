class Solution {
public:
    int jump(vector<int>& nums) {
        //two pointer approach
        int n = nums.size();
        int miniJump = 0;
        int l = 0 , r = 0;
        while(r < n-1){
            int maxiJump = 0;
            for(int i = l ; i <= r ; i++){
                maxiJump = max(nums[i] + i , maxiJump);
            }
            miniJump++;
            l = r + 1;
            r = maxiJump;
        }
        return miniJump;
    }
};
