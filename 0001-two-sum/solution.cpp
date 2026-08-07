class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        // for(int i = 0 ; i<n ; i++){
        //     int num = nums[i];
        //     for(int j = i + 1 ; j<n ; j++){
        //         if(num + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};

        unordered_map <int , int > mp;

        for(int i = 0 ; i<n ; i++){
            int a = nums[i];
            int more = target - a;

            if(mp.find(more) != mp.end()){
                return {mp[more] , i};
            }
            mp[a] = i;
        }
        return {};
    } 
};
