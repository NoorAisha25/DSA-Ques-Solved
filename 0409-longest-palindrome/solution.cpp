class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size() == 1) return 1;

        vector<int>freq(128 , 0);
        for(char c : s) freq[c]++;

        int ans = 0;
        bool hasodd = false;

        for(int cnt : freq){
            ans += (cnt/2) *2;
            if(cnt %2 == 1) hasodd = true;
        }

        if(hasodd) ans += 1;

        return ans;
    }
};
