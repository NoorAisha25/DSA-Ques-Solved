class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
         vector<vector<int>>ans;

         sort(arr.begin() , arr.end());

         ans.push_back(arr[0]);

         int i = 1;

         while( i  < arr.size()){

            if( arr[i][0] <= ans.back()[1]){
                ans.back()[1] = max( ans.back()[1] , arr[i][1]);
            }

            else{
                ans.push_back(arr[i]);
            }
            i++;
         }
         return ans;
    }
};
