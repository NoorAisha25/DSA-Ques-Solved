class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin() , intervals.end() , [](vector<int>&A , vector<int>&B){
            return A[1] < B[1];
        });

        int cnt = 0;
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        
        int i = 1;

        while(i < intervals.size()){

            if(intervals[i][0] < ans.back()[1]){
                cnt++;
            }
            else{
                ans.push_back(intervals[i]);
            }
            i++;
        }
        return cnt;
    }
};
