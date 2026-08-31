class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       int n = arr.size();
       vector<int>res(n , -1);
       int maxRight = -1;

       for(int i = n-1 ; i >= 0; i--){
         res[i] = maxRight;
         maxRight = max( maxRight , arr[i]);
       }
       return res;
    }
};
