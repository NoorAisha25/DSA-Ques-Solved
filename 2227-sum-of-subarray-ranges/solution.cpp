class Solution {
public:
    vector<int> PSE(vector<int>&arr){
        int n = arr.size();
        vector<int>ans(n , -1);
        stack<int>st;

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
    vector<int> PGE(vector<int>&arr){
        int n = arr.size();
        vector<int>ans(n , -1);
        stack<int>st;

        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && arr[st.top()] < arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> NSE(vector<int>&arr){
        int n = arr.size();
        vector<int>ans(n , n);
        stack<int>st;

        for(int i = n-1 ; i>=0 ; i--){
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
    vector<int> NGE(vector<int>&arr){
        int n = arr.size();
        vector<int>ans(n , n);
        stack<int>st;

        for(int i = n-1 ; i>=0 ; i--){
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }
    long long SumMin(vector<int>& arr){   
        vector<int> nse = NSE(arr);
        vector<int> pse = PSE(arr);

        long long sum = 0;
        int i = 0;
        while( i < arr.size()){
            long long left = i - pse[i];
            long long right = nse[i] - i;

            long long totalways = left * right ;

            long long totalSum = arr[i] * totalways;

            sum = sum + totalSum;
            i++;
        } 
        return sum;
    }
    long long SumMax(vector<int>& arr){  
        vector<int> nge = NGE(arr);
        vector<int> pge = PGE(arr);

        long long sum = 0;
        int i = 0;
        while( i < arr.size()){
            long long left = i - pge[i];
            long long right = nge[i] - i;

            long long totalways = left * right ;

            long long totalSum = arr[i] * totalways;

            sum = sum + totalSum;
            i++;
        } 
        return sum;
    }
    long long subArrayRanges(vector<int>& nums) {
       long long res = (SumMax(nums) - SumMin(nums));
       return res;
    }
};
