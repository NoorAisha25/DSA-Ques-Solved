class Solution {
public:
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         int n = nums.size();
         vector<vector<int>>res;

         if(n < 4) return {};
         sort(nums.begin() , nums.end());
         
         for(int i = 0 ; i < n-3 ; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int n1 = nums[i];
            for(int j = i+1 ; j < n -2 ; j ++ ){
                if(j > i+1 && nums[j] == nums[j-1]) continue;

                int n2 = nums[j];

                long long newT = (long long)target - n1 - n2;

                int sum = 0;
                int l = j + 1;
                int r = n - 1;

                while(l < r){
                    sum = nums[l] + nums[r];

                    if(sum < newT) l++;
                    else if(sum > newT) r--;

                    else {
                        while(l < r && nums[l] == nums[l+1]) l++;
                        while(l < r && nums[r] == nums[r-1]) r--;

                        res.push_back({nums[i] , nums[j] , nums[l] , nums[r]});

                        l++;
                        r--;
                    }
                }
            }
         }
         return res;
    }
};
