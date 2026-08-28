class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int l = *min_element(nums.begin() , nums.end());
        int h = *max_element(nums.begin() , nums.end());
        unordered_set<int>st(nums.begin() , nums.end());
        vector<int>missing;

        for(int i = l ; i <= h ; i++){
            if(st.find(i) == st.end()){
                missing.push_back(i);
            }
        }
        return missing;
    }
};
