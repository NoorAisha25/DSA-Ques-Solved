class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //sort in inc order of end of each intervals
        sort(intervals.begin() , intervals.end() , [](vector<int>&A , vector<int>&B){
               return A[1] < B[1];
        });

        int cnt = 0;
        int preEnd = intervals[0][1];

        int i = 1;
        while( i < intervals.size()){
            //overlapping condn
            if(intervals[i][0] < preEnd){
                cnt++;
            }
            else{
                preEnd = intervals[i][1];
            }
            i++;
        }
        return cnt;
    }
};
