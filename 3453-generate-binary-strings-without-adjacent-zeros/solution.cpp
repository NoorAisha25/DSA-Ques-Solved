class Solution {
public:
    void solve(int i , string&s , vector<string>&res){
        if(i >= s.size()){
            res.push_back(s);
            return;
        }

        solve(i+1 , s , res);
        s[i] = '0';
        solve(i+2 , s , res);
        s[i] = '1';
    }
    vector<string> validStrings(int n) {
       string s(n , '1');
       vector<string>res;

       solve(0 , s , res);
       return res;
    }
};
