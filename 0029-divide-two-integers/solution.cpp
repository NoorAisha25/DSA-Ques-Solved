class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if( dividend == INT_MIN && divisor == -1) return INT_MAX;

        bool negative = ( divisor < 0) ^ (dividend < 0);
        long long a = abs((long long)(dividend));
        long long b = abs((long long )(divisor));

        long long res = 0;

        for(int i = 31 ; i >=0 ; i--){
            if((b << i) <= a){
                a -= (b << i);
                res += (1 << i);
            }
        }
        return negative ? (int)-res : (int)res;
    }
};
