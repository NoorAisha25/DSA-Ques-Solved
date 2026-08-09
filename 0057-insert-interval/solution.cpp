class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0;
        vector<vector<int>> res;
        int n = intervals.size();
        while( i < n){

            // eg [1,2][4,8]
            if(intervals[i][1] < newInterval[0]){
                res.push_back(intervals[i]);
            }
            else if( intervals[i][0] > newInterval[1]){
                //[12,16][4,8]
                break;
            }
            else{
                //merge overlapping intervals
                newInterval[0] = min(newInterval[0] , intervals[i][0]);
                newInterval[1] = max(newInterval[1] , intervals[i][1]);
            }
            i++;
        }

        res.push_back(newInterval);
        //break k baad jo bache the
        while(i<n){
            res.push_back(intervals[i]);
            i++;
        }
        return res;
    }
};
