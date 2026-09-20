class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int l = 0;
        int r = n - 1;
        int total = 0;

        while(l < r){
            int h = min(arr[l] , arr[r]);
            int w = r - l;
            total = max(total , h * w);

            if(arr[l] < arr[r]) l++;
            else r--;
        }
        return total;
    }
};
