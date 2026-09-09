class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int r = n-1;
        int cnt = 0;
            while( r >= 0 && s[r] == ' ') r--;
            while(r >= 0 && s[r] != ' '){
                r--;
                cnt++;
            }
        return cnt;
    }
};
