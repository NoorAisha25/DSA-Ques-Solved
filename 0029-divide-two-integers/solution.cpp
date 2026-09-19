class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;

        long long neg = (dividend < 0) ^ (divisor < 0);
        long long a = abs((long long)(dividend));
        long long b = abs((long long)(divisor));
        
        long long res = 0;
        
        for(int i = 31 ; i >= 0 ; i--){
            if((b << i) <= a){
                a -= b << i;
                res += 1 << i;
            }
        }
        return (neg) ? (int)-res : (int)res;
    }
};
