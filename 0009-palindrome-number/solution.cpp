class Solution {
public:
    bool isPalindrome(int x){
       long long temp = x;
       long long rev = 0;
       if(x < 0) return false;
       while(temp){
         int d = temp % 10;
         rev = rev * 10 + d;
         temp = temp / 10;
       }
       if(rev == x) return true;
       else return false;
    }
};
