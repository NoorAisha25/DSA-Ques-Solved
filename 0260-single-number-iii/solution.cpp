class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // unordered_map<int,int>mp;

        // for(int i =0 ; i< nums.size() ; i++){
        //     mp[nums[i]]++;
        // }

        // vector<int>ans;
        // for(auto it : mp){
        //     if(it.second == 1) ans.push_back(it.first);
        // }
        // return ans;

        long long x = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            x ^= nums[i];
        }

        int mask = (x & (-x));
        int b1 = 0 ;
        int b2 = 0;

        for(int i = 0 ; i<nums.size() ; i++){

            if(mask & nums[i]) b1 ^= nums[i];
            else b2 ^= nums[i];
        }
        return {b1 , b2};
    }
};
