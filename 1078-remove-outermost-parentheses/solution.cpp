class Solution {
public:
    string removeOuterParentheses(string s) {
       int depth = 0;
       string res= "";

       for(char &c : s){

            if(c == '('){
                if(depth >0) res.push_back(c);
                depth++;
            }
            else{
                depth--;
                if(depth > 0) res.push_back(c);
            }
       }
       return res;
    }
};
