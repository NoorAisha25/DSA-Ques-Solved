class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin() , s.end());

        string res = "";
        string f = s.front();
        string b = s.back();

        for(int i = 0 ; i < f.size() && i < b.size() ; i++){
            if(f[i] == b[i]){
                res.push_back(f[i]);
            }
            else break;
        }

        return res;
    }
};
