class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth = 0 ;
        string result;
        for(int ch : s){
              if( ch == '('){
                  if(depth > 0) result += ch;
                  depth++;
              }
              else{

                depth--;
                if(depth > 0) result += ch;
              }
        }
        return result;
    }
};
