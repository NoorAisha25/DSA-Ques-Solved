class Solution {
public:
    int mySqrt(int x) {
        int l = 1;
        int h = x;

        if(x == 0) return 0;
        int res = 0;
        while(l <= h){
            long long m = l + (h - l)/2;

            if(m * m <= x){
                 res = m;
                 l = m + 1;
            }
            else h = m - 1;
        }
        return res;
    }
};
