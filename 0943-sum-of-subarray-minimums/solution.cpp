class Solution {
public:
    vector<int> NSE(vector<int>&arr){
        int n = arr.size();
        stack<int>st;
        vector<int>ans(n , n);

        for(int i = n - 1; i >= 0 ; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }

     vector<int> PSE(vector<int>&arr){
        int n = arr.size();
        stack<int>st;
        vector<int>ans(n , -1);

        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }

    int sumSubarrayMins(vector<int>& arr) {
       vector<int>nse = NSE(arr);
       vector<int>pse = PSE(arr);
       int n = arr.size();

       long long sum = 0;
       int m = 1e9 + 7;

       for(int i = 0 ; i < n ; i++){
          long long left = i - pse[i];
          long long right = nse[i] - i;

          long long totalways = left * right;

          long long totalSum = arr[i] * totalways;

          sum = (sum + totalSum )%m;
       }
       return sum;
    }
};
