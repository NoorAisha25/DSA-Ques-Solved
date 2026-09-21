class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
        sort(s.begin() , s.end());
        
        string l = s.front();
        string r = s.back();
        
        string res = "";

        for(int i = 0 ; i < l.size() ; i++){
            if(l[i] == r[i]){
                res.push_back(l[i]);
            }
            else break;
        }
        return res;
    }
};
