class Solution {
public:
    vector<string>res;

    bool isvalid(string &s){
        stack<char>st;

        for(char &c : s){
            if(c == '(') st.push(c);
            else{
                if(st.empty()) return false;
                char ch = st.top();
                st.pop();
                if(c == ')' && ch != '(') return false;
            }
        }
        return st.empty();
    }
    void solve( string& ans ,int n){

        if( ans.size() == 2 * n){
            if(isvalid(ans)){
                res.push_back(ans);
            }
            return;
        }

        ans.push_back('(');
        solve(ans , n);
        ans.pop_back();

        ans.push_back(')');
        solve(ans , n);
        ans.pop_back();
    }
    vector<string> generateParenthesis(int n) {
       string ans = "";
       solve(ans , n);
       return res;
    }
};
