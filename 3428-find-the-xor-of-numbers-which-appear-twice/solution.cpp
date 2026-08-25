class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        vector<int>temp;

        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }

        for(auto &it : mp){
            if(it.second == 2){
                temp.push_back(it.first);
            }
        }

        int x = 0;
        for(int i = 0 ; i < temp.size() ; i++){
            x ^= temp[i];
        }
        return x;
    }
};
