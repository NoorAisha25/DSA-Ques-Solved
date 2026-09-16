class Solution {
public:
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       int n = nums.size();
       if(n < 4) return {};

       vector<vector<int>>res;
       sort(nums.begin() , nums.end());

       for(int i = 0 ; i < n - 3 ; i++){
          if(i > 0 && nums[i] == nums[i-1]) continue;

          int n1 = nums[i];
          for(int l = i + 1 ; l < n - 2 ; l++){
               if(l > i+1 && nums[l] == nums[l-1]) continue;

               int n2 = nums[l];
               long long newt = (long long) target - n1 - n2;
                int j = l+1;
                int k = n -1;
                int sum = 0;

                while(j < k){
                    sum = nums[j] + nums[k];
                    if(sum > newt) k--;
                    else if(sum < newt) j++;
                    else{
                        while(j < k && nums[j] == nums[j+1]) j++;
                        while(j < k && nums[k] == nums[k-1]) k--;

                        res.push_back({nums[i] , nums[l], nums[j] , nums[k]});
                        j++;
                        k--;
                    }
                }
                }
       }
       return res;
    }
};
