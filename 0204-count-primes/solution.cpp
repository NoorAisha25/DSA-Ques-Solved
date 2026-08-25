class Solution {
public:
    
    int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<char>isPrime(n , true);

        for(int i = 3 ; i*i < n ; i += 2){
            if(isPrime[i]){
                for(int j = i * i ; j < n ; j += 2 * i){
                    isPrime[j] = false;
                }
            }
        }

        int cnt = 1;
        for(int i = 3 ; i < n ; i += 2){
            if(isPrime[i]) cnt++;
        }
        return cnt;
    }
};
