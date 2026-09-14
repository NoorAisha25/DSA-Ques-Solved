class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char,int>m;
        unordered_map<char,int>h;

        for(char c : s) m[c]++;
        for(char c : t) h[c]++;

        return m == h;
    }
};
