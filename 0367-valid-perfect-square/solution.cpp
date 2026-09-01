class Solution {
public:
    int mysqrt(int x){
      int l = 1;
      int h = x;
      int res = 0;
      if(x == 0) return 0;
      while(l <= h){
        long long m = l + (h - l)/2;

        if(m * m <= x){
            res = m;
            l = m + 1;
        }
        else{
            h = m - 1;
        }
      }
      return res;
    }
    bool isPerfectSquare(int num) {
        if (mysqrt(num) * mysqrt(num) == num) return true;
        else return false;
    }
};
