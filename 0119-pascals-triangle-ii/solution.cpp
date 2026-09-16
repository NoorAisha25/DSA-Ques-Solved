class Solution {
public:
    vector<int> getRow(int n) {
        vector<int>res (n + 1 , 1);

        long long ans = 1;

        for(int i = 1 ; i < n ; i++){
            ans = ans * (n-i + 1)/i;
            res[i] = ans;
        }
        return res;
    }
};
