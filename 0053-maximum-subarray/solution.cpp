class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        /*---bY THIS BRUTE FORCE APPROACH of TC-O(n^2) ony 204/210 test cases pass----
        int maxi = INT_MIN;
        
        for(int i=0 ; i<n ; i++){
            int sum=0;
            for(int j=i ; j<n ; j++){
                sum += nums[j];
                maxi = max(maxi, sum);
            }
        }
        return maxi;
        -------------------------------------*/

        // Kadane's Algorithms ---DynamicProgramming---TC=O(n^2)
        int CurrSum = 0 ;
        int MaxiSum = INT_MIN ;
        for(int i=0 ; i<n ; i++){
            CurrSum += nums[i];
            MaxiSum = max(MaxiSum , CurrSum);
            if(CurrSum <0) CurrSum=0;
        }
        return MaxiSum;
    }
};
