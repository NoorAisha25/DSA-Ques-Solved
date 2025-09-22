class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        
       int prefixSum= 0 , cnt=0 ;
       unordered_map<int,int> mpp;
       mpp[0] = 1;  // insures sunarray counts from beginning if found
       for(int i=0 ; i<n ; i++){
             prefixSum += nums[i]; 
             int remove = prefixSum - k;
             cnt += mpp[remove];
             mpp[prefixSum] += 1;
       }

          return cnt; 
    }
};


