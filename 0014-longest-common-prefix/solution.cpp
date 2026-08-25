class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string res = "";
        sort(s.begin() , s.end());

        string f = s.front();
        string l = s.back();

        for(int i = 0 ; i < f.size() && i < l.size() ; i++){
            if(f[i] == l[i]){
                res.push_back(f[i]);
            }
            else{
                break;
            }
        }
        return res;
    }
};
