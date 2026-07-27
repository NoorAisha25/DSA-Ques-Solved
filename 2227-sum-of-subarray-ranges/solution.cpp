class Solution {
public:
    vector<int> getPGE(vector<int>& nums){
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n , -1);

        for(int i = 0 ; i < n ; i++){
             while(!st.empty() && nums[st.top()] < nums[i]) st.pop();
             if(!st.empty()){
                ans[i] = st.top();
             }
             st.push(i);
        }
        return ans;
    }
    vector<int> getNGE(vector<int>& nums){
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n , n);

        for(int i = n - 1 ; i>=0 ; i--){
             while(!st.empty() && nums[st.top()] <= nums[i]) st.pop();
             if(!st.empty()){
                ans[i] = st.top();
             }
             st.push(i);
        }
        return ans;
    }
    long long sumMax(vector<int>& nums){
        int n = nums.size();
        vector<int> NGE = getNGE(nums);
        vector<int> PGE = getPGE(nums);

        long long sum = 0;

        for(int i = 0 ; i < n ; i++){

            long long left = i - PGE[i];
            long long right = NGE[i] - i;

            long long totalways = left * right;

            long long totalSum = nums[i] * totalways;

            sum = ( sum + totalSum);
        }
        return sum;
    }
    /////////////////////////////////
    vector<int> getPSE(vector<int>& nums){
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n , -1);

        for(int i = 0 ; i < n ; i++){
             while(!st.empty() && nums[st.top()] > nums[i]) st.pop();
             if(!st.empty()){
                ans[i] = st.top();
             }
             st.push(i);
        }
        return ans;
    }
    vector<int> getNSE(vector<int>& nums){
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n , n);

        for(int i = n - 1 ; i>=0 ; i--){
             while(!st.empty() && nums[st.top()] >= nums[i]) st.pop();
             if(!st.empty()){
                ans[i] = st.top();
             }
             st.push(i);
        }
        return ans;
    }
    long long sumMin(vector<int>& nums){
        int n = nums.size();
        vector<int> NSE = getNSE(nums);
        vector<int> PSE = getPSE(nums);

        long long sum = 0;

        for(int i = 0 ; i < n ; i++){

            long long left = i - PSE[i];
            long long right = NSE[i] - i;

            long long totalways = left * right;

            long long totalSum = nums[i] * totalways;

            sum = ( sum + totalSum) ;
        }
        return sum;
    }
    ///////////////////////////////////////////
    long long subArrayRanges(vector<int>& nums) {
       
        long long result = (sumMax(nums) - sumMin(nums)) ;
        return result;
    }
};
