class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n = nums.size();
       if(n < 3) return {};

       vector<vector<int>>res;
       sort(nums.begin() , nums.end());

       for(int i = 0 ; i < n - 2 ; i++){
           if(i > 0 && nums[i] == nums[i-1]) continue;

           int n1 = nums[i];
           int target = -n1;
           int j = i + 1;
           int k = n-1;
           int sum = 0;

           while(j < k){
              sum = nums[j] + nums[k];

              if(sum < target) j++;
              else if(sum > target) k--;
              else{
                while(j < k && nums[j] == nums[j+1]) j++;
                while(j < k && nums[k] == nums[k-1]) k--;

                res.push_back({-target , nums[j] , nums[k]});
                j++;
                k--;
              }
           }
       }
       return res;
    }
};
