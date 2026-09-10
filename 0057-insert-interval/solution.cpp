class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& temp) {
        vector<vector<int>>res;
        int i = 0;

        while(i < arr.size()){
            if(arr[i][1] < temp[0]) res.push_back(arr[i]);
            else if(arr[i][0] > temp[1]) break;
            else{
                temp[0] = min(arr[i][0] , temp[0]);
                temp[1] = max(arr[i][1] , temp[1]);
            }
            i++;
        }
         res.push_back(temp);
         while(i < arr.size()){
            res.push_back(arr[i]);
            i++;
         }
        return res;
    }
};
