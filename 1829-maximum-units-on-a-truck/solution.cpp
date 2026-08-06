class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin() , boxTypes.end() , [](vector<int>&a , vector<int>&b){
                 return a[1] > b[1];
        });

        int res = 0;

        for(auto &box : boxTypes){
            int cnt = min(truckSize , box[0]);
            res += cnt * box[1];
            truckSize -= cnt;
            if(truckSize == 0) break;
        }
        return res;
    }
};
