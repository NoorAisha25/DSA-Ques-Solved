class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr( n , -1);
        stack<int> st;

        for( int i = 2*n-1 ; i>=0 ; i--){
            int idx = i%n ; //to make not out of bound bcz we circularly use
            while(!st.empty() && st.top() <= nums[idx]){
                st.pop();
            }
            
                if(!st.empty()){
                    arr[idx] = st.top();
                }
                st.push(nums[idx]);
        }
        return arr;
    }
};
