class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
         vector<vector<int>>res;
         int n = arr.size();
         sort(arr.begin() , arr.end());
         res.push_back(arr[0]);

         for(int i = 1 ; i < n ; i++){
            if(arr[i][0] <= res.back()[1]){
                res.back()[1] = max(arr[i][1] , res.back()[1]);
            }
            else{
                res.push_back(arr[i]);
            }
         }
         return res;
    }
};
