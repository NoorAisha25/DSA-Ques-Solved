class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin() , arr.end() , [](vector<int>& a , vector<int>& b){
            return a[1] < b[1];
        });

        vector<vector<int>>res;
        res.push_back(arr[0]);
        int cnt = 0;

        for(int i = 1 ; i < n ; i++){
            if(arr[i][0] < res.back()[1]) cnt++;
            else res.push_back(arr[i]);
        }
        return cnt;
    }
};
