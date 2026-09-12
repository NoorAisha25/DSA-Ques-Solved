class Solution {
public:
    bool check(string &prev , string &curr){

        if(prev.size() + 1 != curr.size()) return false;

        int n = prev.size();
        int m = curr.size();
        int i = 0;
        int j = 0;

        while(i < n && j < m){
            if(prev[i] == curr[j]){
                i++;
            }
            j++;
        }
        return i == prev.size();
    }
    int longestStrChain(vector<string>& words) {
        int n = words.size();

        sort(words.begin() , words.end() , [](string &a , string &b){
            return a.size() < b.size();
        });

        vector<int>dp(n , 1);
        int len = 1;

        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(check(words[j] , words[i])){
                    dp[i] = max(dp[i] , dp[j] + 1);
                }
            }
            len = max(len , dp[i]);
        }

        return len;
    }
};
