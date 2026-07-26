class Solution {
public:
    bool isAnagram(string s, string t) {
        // int n = s.length();
        // int m = t.length();

        // if(n != m) return false;
        // sort(s.begin() , s.end());
        // sort(t.begin() , t.end());
        // return s == t;

        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(char c : s){
            mp1[c]++;
        }
        for(char c : t){
            mp2[c]++;
        }

        return mp1 == mp2;
    }
};
