class Solution {
public:
    
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        set<int>st;
        int longest = 0;

        for(int i = 0 ; i < n ; i++){
            st.insert(nums[i]);
        }

        for(int it : st){
            if(st.find(it-1) == st.end()){
                int x = it;
                int cnt = 1;
                while(st.find(x + 1) != st.end()){
                    x = x + 1;
                    cnt++;
                }
                longest = max ( longest , cnt);
            }
        }
        return longest;
    }
};
