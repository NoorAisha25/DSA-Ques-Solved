class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int ans = -1;
        int cnt = 0;

        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.first % 2 == 0 ){
                if(it.second > cnt || (it.second == cnt && it.first < ans)){
                cnt = it.second;
                ans = it.first;
            }
          }
        }
        return ans;
    }
};
