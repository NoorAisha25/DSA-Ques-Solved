class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       int n = nums.size();
       if(n < 4) return {};

       sort(nums.begin() , nums.end());
       vector<vector<int>>res;

       for(int i = 0 ; i < n-3 ; i++){
           if(i > 0 && nums[i] == nums[i-1])continue;

           int n1 = nums[i];
           for(int j = i + 1 ; j < n - 2 ; j++){
               if(j > i+1 && nums[j] == nums[j-1]) continue;

               int n2 = nums[j];
               long long newtarget = (long long)target - n1 - n2;
               int l = j + 1;
               int h = n - 1;
               int sum = 0 ;
               while(l < h ){
                  sum = nums[l] + nums[h];
                  if(sum < newtarget) l++;
                  else if(sum > newtarget) h--;
                  else{
                     while(l < h && nums[l] == nums[l+1]) l++;
                     while(l < h && nums[h] == nums[h-1]) h--;

                     res.push_back({nums[i] , nums[j] , nums[l] , nums[h]});
                     l++;
                     h--;
                  }
               }
           }
       }
       return res;
    }
};
