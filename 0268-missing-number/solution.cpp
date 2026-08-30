class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // vector<int> hash(n+1 , 0);

        // for(int i = 0 ; i<n ; i++){
        //     hash[nums[i]] = 1;
        // }

        // for(int i = 0 ; i<=n ; i++){
        //     if(hash[i] == 0){
        //         return i;
        //     }
        // }
        // return -1;

        // int sum = 0;
        // int s = n * (n+1)/2;

        // for(int i = 0 ; i< n ; i++){
        //     sum += nums[i];
        // }
        // return s-sum;
        // return -1;

        int x1 = 0;
        for(int i = 0 ; i <= n ; i++){
            x1 ^= i;
        }
        int x2=0;
        for(int i = 0 ; i < n ; i++ ){
            x2 ^= nums[i];
        }
        return x1^x2;
    }
};
