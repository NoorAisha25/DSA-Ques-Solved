class Solution {
public:
    bool isvalid(string &s){
        stack<char>st;

        for(char c : s){
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
    void solve(string& s , int n ,  vector<string>&res){

        if(s.size() == 2 * n){
            if(isvalid(s)){
                res.push_back(s);
            }
            return;
        }

        s.push_back('(');
        solve(s , n , res);
        s.pop_back();

        s.push_back(')');
        solve(s , n , res);
        s.pop_back();
    }
    vector<string> generateParenthesis(int n) {
       string s = "";
       vector<string>res;
       solve(s , n , res);
       return res;
    }
};
