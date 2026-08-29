class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++) arr.push_back({nums[i], i});
        sort(arr.begin(), arr.end());

        vector<int> res(n);
        vector<int> groupIdx, groupVals;

        for(int i=0;i<n;i++){
            groupIdx.push_back(arr[i].second);
            groupVals.push_back(arr[i].first);

            if(i==n-1 || arr[i+1].first - arr[i].first > limit){
                sort(groupIdx.begin(), groupIdx.end());
                sort(groupVals.begin(), groupVals.end());
                for(int k=0;k<groupIdx.size();k++)
                    res[groupIdx[k]] = groupVals[k];
                groupIdx.clear();
                groupVals.clear();
            }
        }
        return res;
    }
};

