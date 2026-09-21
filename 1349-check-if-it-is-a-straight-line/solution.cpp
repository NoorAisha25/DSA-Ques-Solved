class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& arr) {
        
        int x0 = arr[0][0] , y0 = arr[0][1];
        int x1 = arr[1][0] , y1 = arr[1][1];

        for(int i = 2 ; i < arr.size() ; i++){
            int x = arr[i][0] , y = arr[i][1];

            if((y1-y0)*(x-x0) != (x1 - x0) * (y - y0)) return false;
        }
        return true;
    }
};
