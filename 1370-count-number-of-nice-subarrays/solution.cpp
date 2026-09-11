class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        mp[0] = 1;
        int cnt = 0;
        int oddcnt = 0;

        for(int i = 0 ; i < n ; i++){
            oddcnt += nums[i]%2;

            if(mp.find(oddcnt - k) != mp.end()){
                cnt += mp[oddcnt - k];
            }

            mp[oddcnt]++;
        }
        return cnt;
    }
};
