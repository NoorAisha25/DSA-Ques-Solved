class Solution {
public:
    string longestPalindrome(string s) {
       if(s.empty()) return "";
       int n = s.size();
       int start = 0;
       int maxlen = 1;

       auto expand =  [&](int l , int r){
          while(l >= 0 && r < n && s[l] == s[r]){
              if(r - l  + 1 > maxlen){
                 start = l;
                 maxlen = r - l  + 1;
              }
              l--;
              r++;
          }
       };

       for(int i = 0 ; i < n ; i++){
          expand(i , i);
          expand(i , i + 1);
       }

       return s.substr(start , maxlen);
    }
};

