class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        int temp = x;
        while(temp){
            int d = temp%10;
            rev = rev * 10 + d;
            temp = temp/10;
        }
        if(rev > INT_MAX || rev <INT_MIN) return 0;
        return rev;
    }
};
