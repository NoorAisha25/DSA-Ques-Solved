class Solution {
public:
    bool isValid(string s) {
        stack<int>st;

        for(char &ch : s){
            if(ch == '(' || ch == '{' || ch == '[') st.push(ch);
            else{
                if(st.empty()) return false;
                else{
                    char c = st.top();
                    st.pop();

                    if((c == '(' && ch != ')') || (c == '{' && ch != '}') || (c == '[' && ch != ']')) return false;

                }
            }
        }
        return st.empty();
    }
};
  
