class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n = s.size();
       vector<int>hm(256 ,-1);

       int l = 0;
       int r = 0;
       int maxLen = 0;

       while(r < n){
          
          if( hm[s[r]] != -1){
            if( hm[s[r]] >= l){
                l = hm[s[r]] + 1;
            }
          }
          hm[s[r]] = r;
          maxLen = max( maxLen , r-l+1 );
          r++;
       } 
       return maxLen ; 
    }
};
