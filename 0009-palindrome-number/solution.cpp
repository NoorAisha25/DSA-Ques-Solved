class Solution {
public:
    bool isPalindrome(int x){
       long long temp = x;
       long long rev = 0;
       if(temp < 0) return false;
       while(temp > 0){
        int digit = temp%10;
        temp = temp / 10;
        rev = (rev * 10) + digit;
       }
       if(x == rev) return true;
       else return false;
    }
};
