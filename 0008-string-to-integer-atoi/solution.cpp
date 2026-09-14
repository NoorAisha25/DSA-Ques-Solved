class Solution {
public:
    int solve(int i , long res , string &s , int sign){
         if(i >= s.size() || !isdigit(s[i])){
            return (int)(sign * res);
         }
           int digit = s[i] - '0';

           if(res > INT_MAX/10 || (res == INT_MAX/10 && digit>7)){
             return (sign == 1) ? INT_MAX : INT_MIN;
           }

           res = res * 10 + digit;
           return solve(i + 1 , res, s , sign);
    }
    int myAtoi(string s) {
        int n = s.size();
        int sign = 1;
        long res = 0;
        int i = 0;

        while(i < n && s[i] == ' ') i++;

        if(i < n && (s[i] == '+' || s[i] == '-')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }       

        return solve(i , 0 , s , sign);
    }
};
