class Solution {
public:
    void solve(int i , string &s , vector<string>&ans){
        if(i >= s.size()){
            ans.push_back(s);
            return;
        }

        solve(i+1 , s , ans);
        s[i] = '0';
        solve(i+2 , s , ans);
        s[i] = '1';
    }
    vector<string> validStrings(int n) {
       string s(n , '1');
       vector<string>ans;

       solve(0 , s , ans);
       return ans;
    }
};
