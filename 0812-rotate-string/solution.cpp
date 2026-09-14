class Solution {
public:
    bool rotateString(string s, string g) {
        int n = s.size();

        if(s.size() != g.size()) return false;

        if((s+s).find(g) != string :: npos) return true;
        return false;
    }
};
