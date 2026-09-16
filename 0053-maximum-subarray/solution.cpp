class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        //*---bY THIS BRUTE FORCE APPROACH of TC-O(n^2) ony 204/210 test cases pass----
        // for(int i = 0 ; i<n ; i++){
        //     int sum = 0;
        //     for(int j = i ; j< n ; j++){
        //         sum += nums[j];
        //         maxi = max(maxi , sum);
        //     }
        // }
        // return maxi;
        //-------------------------------------*

        // Kadane's Algorithms ---DynamicProgramming---TC=O(n^2)
        int currsum = 0;
        int maxsum = INT_MIN;

        for(int i= 0 ; i < n ; i++){
            currsum += nums[i];
            maxsum = max( maxsum , currsum);

            if(currsum < 0) currsum = 0;
        }
        return maxsum;
    }
};
