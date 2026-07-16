class Solution {
public:
    int mySqrt(int x) {
        int l = 0 , h = x;
        int result = 1;
        if(x == 0) return 0;
        while(l <= h){
            
            long long m = ( l + h )/2;
            if( m*m <= x) {
                result = m;
                l = m + 1;
            }
            else {
                h = m - 1;
            }
        }
        
        return result;
    }
};
