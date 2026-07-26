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
        int currSum = 0;
        int MaxiSum = INT_MIN;
        for(int i = 0 ; i<n ; i++){
            currSum += nums[i];
            MaxiSum = max(MaxiSum , currSum);
            if(currSum < 0) currSum = 0;
        }
        return MaxiSum;
    }
};
