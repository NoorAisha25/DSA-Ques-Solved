class Solution {
public:
    int m = 1e9 + 7;
    long long find( long long x , long long n){ // x^n

        if( n == 0 ) return 1;
        long long half = find( x , n/2);
        long long res = (half * half)%m;
        if( n %2 == 1){
            res = (res * x)%m;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        return (long long) find( 5 , (n+1)/2) * find( 4 , n/2)%m;
    }
};
