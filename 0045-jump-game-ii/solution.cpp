class Solution {
public:
    int jump(vector<int>& nums) {
        //two pointer approach
        int n = nums.size();
        int mini = 0;
        int l = 0;
        int r = 0;

        while(r < n-1){
            int maxi = 0;
            for(int i = l ; i <= r ; i++){
                maxi = max( maxi , i + nums[i]);
            }
            mini++;
            l = r+1;
            r = maxi;
        }
        return mini;
    }
};
