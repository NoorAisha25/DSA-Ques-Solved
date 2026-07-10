class Solution {
public:
    vector<vector<int>> generate(int rowIndex){
       vector<vector<int>> result(rowIndex); //for 2d vector

       for(int i=0 ; i<rowIndex ; i++){
             result[i] = vector<int>(i+1 , 1);
           for(int j=1 ; j<i ; j++){
              result[i][j] = result[i-1][j] + result[i-1][j-1];
           }
       }
       return result;
    }
};
