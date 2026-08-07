class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
    //     //1
    //     int cnt = 0;
    //     for(int i = 0 ; i<n ; i++){
    //      int sum = 0;
    //      for(int j = i ; j<n ; j++){
    //         sum += nums[j];
    //         if(sum == k) cnt++;
    //      }
    //   }
    //   return cnt;

       unordered_map<int,int>mp;
       mp.insert({0,1});
       int prefixsum = 0;
       int res = 0;
       for(int i = 0 ; i<n ; i++){
          prefixsum += nums[i];
          if(mp.find(prefixsum - k) != mp.end()){
             res += mp[prefixsum - k];
          }
          mp[prefixsum]++;
       }
       return res;
    }
};


