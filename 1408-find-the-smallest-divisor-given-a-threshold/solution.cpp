class Solution {
public:
/// -----Very Very Happyyyyyyyyyyyyyyyyyyyy bcz done this in my first attempt-----------------///
    int solve(vector<int>&arr , int m){
        int sum = 0;
        for(int i = 0 ; i < arr.size() ; i++){

            sum += ceil((double)arr[i] / (double)m);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
       int n = nums.size();
       int l = 1;
       int h = *max_element(nums.begin() , nums.end());
       int res = 0;

       while(l <= h){
           int m = l + (h - l)/2;

           int pos = solve(nums , m);

           if(pos <= threshold){
             res = m;
             h = m - 1;
           }
           else l = m  + 1;
       }

       return res;
    }
};
