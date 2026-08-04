class Solution {
public:
    // int solve(int n , vector<int>& f ){
    //      if(n <= 1) return n;

    //     if(f[n] != -1) return f[n];

    //     f[n] = solve(n - 1 , f) + solve( n - 2 , f);
    //     return f[n];
    // }
    int fib(int n ) {
        //it is recursion where tc  - 0(2^n)
        // if( n <= 1) return n;

        // return fib(n-1) + fib(n-2);

        //using dp;
        // vector<int> f( n + 1 , -1);
        // return solve(n , f);
        vector<int>dp(n+1);
        if ( n <= 1) return n;
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2 ; i <=n ; i++ ){
            dp[i]= dp[i-1]+ dp[i-2];
        }
        return dp[n];
    }
};
