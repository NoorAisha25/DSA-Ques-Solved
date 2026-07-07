class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0; // sum not taken here bcz if we iinc i then sum should be equal to 0
        for(int i=0 ; i<n ; i++){
            int sum = 0;
            for(int j=i ; j<n ; j++){
                sum += nums[j];
                if(sum==k) cnt++;
            }
        }
        return cnt;
    }
};


