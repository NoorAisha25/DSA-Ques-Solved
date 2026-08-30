class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>>t(n , vector<int>(m , 0));

        t[0][0] = grid[0][0];

        for(int col = 1 ; col < m ; col++){
            t[0][col] = grid[0][col] + t[0][col-1];
        }

        for(int row = 1 ; row < n ; row++){
            t[row][0] = grid[row][0] + t[row-1][0];
        }

        for(int i = 1 ; i  < n ; i++){
            for(int j = 1 ; j < m ; j++){
                t[i][j] = grid[i][j] + min(t[i-1][j] , t[i][j-1]);
            }
        }

        return t[n-1][m-1];
    }
};
