class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& arr) {
        sort(arr.begin() ,arr.end());

        multiset<int>st;
        long long ans = 0;

        for(auto &it : arr){
            int start = it[0];


            while(!st.empty() && *st.begin() < start){
                st.erase(st.begin());
            }

            ans += st.size();
            st.insert(it[1]);
        }
        return ans;
    }
};
