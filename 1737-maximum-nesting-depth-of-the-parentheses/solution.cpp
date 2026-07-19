class Solution {
public:
    int maxDepth(string s) {
        int depth = 0 ;
        int maxiDep = 0;
        for(char &ch : s){

            if(ch == '('){
                  depth++;
                  maxiDep = max( maxiDep , depth);
            }
            if(ch == ')') depth--;
        }
        return maxiDep ; 
    }
};
