class Solution {
public:
    vector<vector<int>> generate(int rowIndex){
      vector<vector<int>>res(rowIndex);

      for(int i = 0 ; i < rowIndex ; i++){
         res[i] = vector<int>(i + 1 , 1);
         for(int j = 1 ;  j < i  ; j++){
            res[i][j] = res[i-1][j] + res[i-1][j-1];
         }
      }
      return res;
    }
}; 
/* if rowIndex = 5
1     i = 0 , res[0] = vector of size 1 with 1 in it , inner loop j<i which means j < 0 don't run
2    i = 1 , res[1] = vector of size 2 with 1 in each , and j<i means j < 1 not run
3    i = 2 , res[2] = vector of size 3 with 1 in each , inner loop j < i means j < 2 , j = 1 -------- res[2][1] = res[]*/
