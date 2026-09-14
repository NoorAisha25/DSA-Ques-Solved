class Solution {
public:
    string longestPalindrome(string s) {
       if(s.empty()) return "";
       
       int i = 0 ;
       int maxLen = 1;

       auto expand = [&](int l , int r){
           while(l >= 0 && r < s.size() && s[l] == s[r]){
              if(r -l + 1 > maxLen){
                  i = l;
                  maxLen = r - l  + 1;
              }
              l--;
              r++;
           }
       };

       for(int i = 0 ; i < s.size() ; i++){
           expand(i , i);
           expand(i , i + 1);
       }

       return s.substr(i , maxLen);
    }
};

