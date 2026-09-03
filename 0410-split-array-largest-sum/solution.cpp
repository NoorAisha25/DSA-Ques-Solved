class Solution {
public:
    int fun(vector<int>&arr , int m , int k){
        int sum = 0;
        int cnt = 1;
        for(int i = 0 ; i < arr.size() ; i++){
            sum += arr[i];

            if(sum > m){
                cnt++;
                sum = arr[i];
            }
        }
        return cnt;
    }
    int solve( vector<int>& arr , int k){
        int n = arr.size();
        int l = *max_element(arr.begin() , arr.end());
        int h = accumulate(arr.begin() , arr.end() , 0);
        int mini = 0;

        while(l <= h){
            int m = l + (h - l)/2;
            int pos = fun(arr , m , k);

            if(pos <= k){
                mini = m;
                h = m - 1;
            }
            else l = m  + 1;
        }
        return mini;
    }
    int splitArray(vector<int>& nums, int k) {
        return solve(nums , k);
    }
};
