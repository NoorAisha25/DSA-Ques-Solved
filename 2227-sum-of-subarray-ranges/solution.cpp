class Solution {
public:
    vector<int> nge(vector<int>&nums){
        int n = nums.size();
        stack<int> st;
        vector<int> arr( n , n);
        for(int i = n - 1 ; i>= 0 ; i--){

            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            if(!st.empty()){
                arr[i] = st.top();
            }
            st.push(i);
        }
        return arr;
    }
    vector<int> pge(vector<int>&nums){
        int n = nums.size();
        stack<int> st;
        vector<int> arr( n , -1);
        for(int i = 0 ; i< n ; i++){

            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }
            if(!st.empty()){
                arr[i] = st.top();
            }
            st.push(i);
        }
        return arr;
    }
    vector<int> nse(vector<int>&nums){
        int n = nums.size();
        stack<int> st;
        vector<int> arr( n , n);
        for(int i = n - 1 ; i>= 0 ; i--){

            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            if(!st.empty()){
                arr[i] = st.top();
            }
            st.push(i);
        }
        return arr;
    }
    vector<int> pse(vector<int>&nums){
        int n = nums.size();
        stack<int> st;
        vector<int> arr( n , -1);
        for(int i = 0 ; i< n ; i++){

            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }
            if(!st.empty()){
                arr[i] = st.top();
            }
            st.push(i);
        }
        return arr;
    }
    long long  sumMin(vector<int>&nums){
        vector<int>NSE = nse(nums);
        vector<int>PSE = pse(nums);
        long long sum = 0;

        for(int i = 0 ; i<nums.size() ; i++){

            long long left = i - PSE[i];
            long long right = NSE[i] - i;

            long long totalways = left * right ;
            
            long long totalsum = nums[i] * totalways;

            sum = sum + totalsum ;

        }
        return sum;
    }
    long long  sumMax(vector<int>&nums){
        vector<int>NGE = nge(nums);
        vector<int>PGE = pge(nums);
        long long sum = 0;

        for(int i = 0 ; i<nums.size() ; i++){

            long long left = i - PGE[i];
            long long right = NGE[i] - i;

            long long totalways = left * right ;
            
            long long totalsum = nums[i] * totalways;

            sum = sum + totalsum ;

        }
        return sum;
    }

    long long subArrayRanges(vector<int>& nums) {
       
       long long res = (sumMax(nums) - sumMin(nums));
       return res;
    }
};
