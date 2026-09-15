class Solution {
public:
    int solve(vector<vector<int>>&mat , int m , int n){
        int maxval = -1;
        int idx = -2;

        for(int i = 0 ; i < n ; i++){

            if(mat[i][m] > maxval){
                maxval = mat[i][m];
                idx = i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int l = 0;
        int h = m - 1;

        while(l <= h){
            int mid = l + (h - l)/2;

            int maxrow = solve(mat , mid , n);

            int left = (mid - 1 >= 0) ? mat[maxrow][mid-1] : -1;
            int right = (mid + 1 < m) ? mat[maxrow][mid+1] : -1;

            if(mat[maxrow][mid] > left && mat[maxrow][mid]>right){
                return {maxrow , mid};
            }
            else if(mat[maxrow][mid] < left) h = mid - 1;
            else l = mid + 1;
        }

        return {-1 , -1};
    }
};
