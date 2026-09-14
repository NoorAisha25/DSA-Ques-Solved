class Solution {
public:
    int m = 1e9 + 7;
    long long solve(long long x , long long n){
        if(n == 0) return 1;
        long long half = solve(x , n/2);
        long long res = (half * half)%m;
        if(n % 2 != 0) {
            res = (x * res)%m;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        return (long long) solve(5 , (n+1)/2) * solve(4 , n / 2)%m ;
    }
};
