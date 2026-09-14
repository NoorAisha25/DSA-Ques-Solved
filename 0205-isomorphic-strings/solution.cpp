class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size() != t.size()) return false;

        vector<int>m(256 , -1);
        vector<int>h(256 , -1);

        for(int i = 0 ; i < s.size()  ; i++){

            if(m[s[i]] == -1 && h[t[i]] == -1){
                m[s[i]] = t[i];
                h[t[i]] = s[i];
            }

            else if( m[s[i]] != t[i] && h[t[i]] != s[i]) return false;
        }

        return true;
    }
};
