class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>Maxi(n) , Mini(n);

        Maxi[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            Maxi[i] = max(Maxi[i-1] , nums[i]);
        }

        Mini[n-1] = nums[n-1];
        for(int i = n-2 ; i >= 0 ; i--){
            Mini[i] = min(Mini[i+1] , nums[i]);
        }

        for(int i = 0 ; i < n ; i++){
            if(Maxi[i] - Mini[i] <= k) return i;
        }
        return -1;
    }
};
