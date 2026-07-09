//optimal approach in which TC : O(m*n) and SC : O(1)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         
         int n = matrix.size(); // -----row
         int m = matrix[0].size();  // ----col

         bool firrowimpa = false;
         bool fircolimpa = false;
         
         //check if first row impacted
         for(int col=0 ; col<m ; col++){
                if(matrix[0][col] == 0){
                   firrowimpa = true;
                }   
         }
         //check if first col is impacted
          for(int row=0 ; row<n ; row++){
                if(matrix[row][0] == 0){
                   fircolimpa = true;
                }   
         }

         //  banchmark set 
         for(int i=1 ; i<n ; i++){
            for(int j=1 ; j<m ; j++){
               if(matrix[i][j] == 0){
                matrix[i][0] =0;
                matrix[0][j] =0;
               }
            }    
         }

         //excluding first row and first col
         for(int i=1 ; i<n ; i++){
            for(int j=1 ; j<m ; j++){
                if( matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] =0;
                }
            }    
         }

         if(firrowimpa){
            for(int j=0 ; j<m ; j++){
                matrix[0][j] = 0;
            }
         }
         if(fircolimpa){
            for(int i=0 ; i<n ; i++){
                matrix[i][0] = 0;
            }
         }   
    }
    
};
