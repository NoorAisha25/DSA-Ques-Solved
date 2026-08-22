class Solution {
public:
    bool solve(int i , vector<int>&nums , vector<int>&t){
        int n = nums.size();

        if(i == n) return true;

        bool res = false;
        //memoization checks the duplicate entry
        if(t[i] != -1) return t[i];
        //1st condition -- 2 elements equal
        if( i+1 < n && nums[i] == nums[i+1]) res |= solve( i+2 , nums , t);
        //2nd condition -- 3 elements equal
        if(i+2 < n && nums[i] == nums[i+1] && nums[i+1] == nums[i+2]) res |= solve( i + 3 , nums, t);
        //3rd condn -- exactly consecutive elements are equal
        if(i+2 < n && nums[i+1] - nums[i] == 1 && nums[i+2] - nums[i+1] == 1) res |= solve( i + 3 , nums , t);

        return t[i] = res;
    }
    bool validPartition(vector<int>& nums) {
        int n = nums.size();
        vector<int>t(n , -1);

        return solve(0 , nums , t);
    }
};
