class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

        int minjump = 0 ; //minimum jump to reach n-1;
        int l = 0 , r = 0;

        while( r < n-1){
               int maxJump = 0;
               for(int i = l ; i <= r ; i++){
                  maxJump = max( nums[i] + i , maxJump);
               }
               minjump++;
               l = r + 1;
               r = maxJump;
        }
        return minjump;
    }
};
