class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        vector<int> mps(256 , -1);
        vector<int> mpt(256 , -1);

        int n = s.size();

        for(int i = 0 ; i < n ; i++){
            if(mps[s[i]] == -1 && mpt[t[i]] == -1){
                mps[s[i]] = t[i];
                mpt[t[i]] = s[i];
            }
            else if( mps[s[i]] != t[i] && mpt[t[i]] != s[i]){
                return false;
            }
        }
        return true;
    }
};
