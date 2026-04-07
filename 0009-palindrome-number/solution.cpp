class Solution {
public:
    bool isPalindrome(int x){
       long long temp = x;
       long long rev = 0;
       if (x < 0) return false;
       while( x > 0){
          int d = x%10;
          x = x/10;
          rev= (rev * 10) + d;
       }     
       if( temp == rev) return true;
       else return false;
    }
};
