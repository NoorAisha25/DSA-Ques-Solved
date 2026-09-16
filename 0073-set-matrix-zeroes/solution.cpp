//optimal approach in which TC : O(m*n) and SC : O(1)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int n = matrix.size();
         int m = matrix[0].size();

         bool frow = false;
         bool fcol = false;

         for(int col = 0 ; col < m ; col++){
            if(matrix[0][col] == 0){
                frow = true;
            }
         }

         for(int row = 0 ; row < n ; row++){
            if(matrix[row][0] == 0){
                fcol = true;
            }
         }

         for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
         }

         for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
         }

         if(frow){
            for(int i = 0 ; i < m ; i++){
                matrix[0][i] = 0;
            }
         }

         if(fcol){
            for(int i = 0 ; i < n ; i++){
                matrix[i][0] = 0;
            }
         }
    } 
};
