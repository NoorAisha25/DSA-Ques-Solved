class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
       vector<vector<int>> res;

       sort(arr.begin() , arr.end());

       res.push_back(arr[0]); // 1st interval of intervals added in result to compare 
       int i = 1;
       while( i < arr.size()){
         //overlapping condition
         if(arr[i][0] <= res.back()[1]){
              res.back()[1] = max(arr[i][1] , res.back()[1]);
         }
         //non overlapping condition
         else{
              res.push_back(arr[i]);
         }
           i++;
       }
       return res;
    }
};
