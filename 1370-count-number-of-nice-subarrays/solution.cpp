class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;
        int oddcnt = 0;
        unordered_map<int , int>mp;
        mp[0] = 1;

        for(int i = 0 ; i < n ; i++){
            oddcnt += nums[i]%2;

            if(mp.find(oddcnt - k ) != mp.end()){
                res += mp[oddcnt-k];
            }
            mp[oddcnt]++;
        }
        return res;
    }
};
