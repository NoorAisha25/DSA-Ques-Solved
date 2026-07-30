class Solution {
public:
    int helper(string s , int i , long long res , int sign){
           if(i >= s.size() || !isdigit(s[i])){
                return (int)(sign * res);
           }

            int digit = s[i] - '0';

            if(res > INT_MAX/10 || (res == INT_MAX/10 && digit > 7)){
                return (sign == 1) ? INT_MAX : INT_MIN ;
            }

            res = res * 10 + digit;
            i++;
        
        return helper(s , i , res , sign);
    }
    int myAtoi(string s) {
        long res = 0;
        int n = s.length();
        int i = 0;
        int sign = 1;

        // skipping the white space
        while(i < n && s[i] ==  ' ' ){ i++;}

        if(i < n && (s[i] == '-' || s[i] == '+')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        return helper(s , i , 0 , sign);
    }
};
