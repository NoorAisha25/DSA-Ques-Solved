class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        int temp = x;
        while (temp != 0){
            int d = temp%10;
            temp = temp/10;
            rev = (rev * 10)+ d;
        }
        if(rev < INT_MIN || rev > INT_MAX) return 0;
        return(rev);
    }
};
