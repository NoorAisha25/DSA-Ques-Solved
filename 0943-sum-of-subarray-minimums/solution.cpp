class Solution {
public:

    vector<int> getNSE(vector<int>& arr){
        int n = arr.size();
        vector<int> ans( n , n);
        stack<int> st;

        for(int i = n-1 ; i>= 0 ; i--){

            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();

            if(!st.empty()) ans[i] = st.top();

            st.push(i);
        }
        return ans;

    }

     vector<int> getPSE(vector<int>& arr){
        int n = arr.size();
        vector<int> ans( n , -1);
        stack<int> st;

        for(int i = 0 ; i < n ; i++){

            while(!st.empty() && arr[st.top()] > arr[i]) st.pop();

            if(!st.empty()) ans[i] = st.top();

            st.push(i);
        }
        return ans;

    }

    int sumSubarrayMins(vector<int>& arr) {
        vector<int> pse = getPSE(arr);
        vector<int> nse = getNSE(arr);

        long long sum = 0;
        int m = 1e9 + 7;

        for(int i = 0 ; i< arr.size() ; i++){
            long long left = i - pse[i];
            long long right = nse[i] - i;

            long long totalways = left * right;

            long long totalsum = arr[i] * totalways;

            sum = (sum + totalsum)%m;
        }
        return sum;

    }
};
