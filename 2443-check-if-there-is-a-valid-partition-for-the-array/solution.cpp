class Solution {
public:
    bool solve(int i  , vector<int>&arr , vector<int>&t ){
        int n = arr.size();
        if(i == arr.size()) return true;

        bool res = false;

        if(t[i] != -1) return t[i];

        if(i+1 < n  && arr[i] == arr[i+1]){
            res |= solve(i+2 , arr , t);
        }

        if(i+2 <n && arr[i] == arr[i+1] && arr[i+1] == arr[i+2]){
            res |= solve(i+3 , arr , t);
        }

        if(i+2 < n && arr[i+1] - arr[i] == 1 && arr[i+2] - arr[i+1] == 1){
            res |= solve(i+3 , arr , t);
        }

        return t[i] = res;
    }
    bool validPartition(vector<int>& nums) {
       int n = nums.size();
       vector<int>t(n , -1);
       return solve(0 , nums , t);
    }
};
