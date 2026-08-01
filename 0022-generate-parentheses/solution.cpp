class Solution {
public:
    //global variable
    vector<string> res;

    bool isvalid(string &curr){
       stack<int> st;
        for(char &ch : curr){

            if(ch == '(') st.push(ch);
            else{
                if(st.empty()) return false;
                char c = st.top();
                st.pop();
                if(ch == ')' && c != '(') return false;
            }
        }
        return st.empty();
    }
    void solve (string& curr , int n){

        // string stop generating when size becomes 2n na dchecking validity of string
        if(curr.length() == 2*n){
            if(isvalid(curr)){
                res.push_back(curr);
            }
            return;
        }

        //first start with curr string as "("
        curr.push_back('('); //do something
        solve(curr , n);  // explore string combinations
        curr.pop_back(); //undo (

        //2nd start with curr string a string )
        curr.push_back(')'); // do
        solve(curr, n);  //explore
        curr.pop_back(); //undo
    }
    vector<string> generateParenthesis(int n) {
        // using back tracking
       string curr = ""; //---curr
       solve(curr , n) ;///---explore
       return res; //---final string 
    }
};
