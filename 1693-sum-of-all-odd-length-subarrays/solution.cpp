class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                if((j - i + 1 )%2 == 1){
                    int sum = 0;
                    for(int k = i ; k <= j ; k++){
                        sum += nums[k];
                    }
                    total += sum;
                }
            }
        }
        return total;
    }
};
