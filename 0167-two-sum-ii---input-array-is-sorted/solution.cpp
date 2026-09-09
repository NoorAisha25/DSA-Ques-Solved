class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        unordered_map<int , int>mp;

        for(int i = 0 ; i < n ; i++){
            int x = arr[i];
            int more = target - x;
            if(mp.find(more) != mp.end()){
                return {mp[more] + 1 , i + 1};
            }
            mp[arr[i]] = i;
        }
        return {};
    }
};
