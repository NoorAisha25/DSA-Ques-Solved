class Solution {
public:
    bool isPalindrome(int x){
        int rev=0 , temp=x;
        if(temp < 0) return false;
        while(temp > 0 ){
            int ld = temp%10;
            if(rev > INT_MAX/10 || (rev == INT_MAX/10 && ld>7)) return 0;
            if(rev < INT_MIN/10 || (rev == INT_MAX/10 && ld<-8)) return 0;
            rev = (rev * 10) + ld; 
            
            temp=temp/10;
        } if (rev == x) return true;
       else return false;
    }       
};
