class Solution {
public:
    int solve(int i , int j , int m , int n , vector<vector<int>>&arr , vector<vector<int>>&t){

        if(i < 0 || i >= m || j < 0 || j >= n || arr[i][j] == 1) return 0;

        if(i == m-1 && j == n-1){
            return 1;
        }

        if(t[i][j] != -1) return t[i][j];

        int right = solve(i , j+1 , m , n , arr , t);
        int down = solve(i+1 , j , m , n , arr , t);

        return t[i][j] = right + down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();

        vector<vector<int>> t(m+1 , vector<int>(n+1 , -1));

        return solve(0 , 0 , m , n , arr , t);
    }
};
