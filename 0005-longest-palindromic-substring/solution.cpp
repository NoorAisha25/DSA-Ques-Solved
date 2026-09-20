class Solution {
public:
    string longestPalindrome(string s) {
       int n = s.size();
       if(s.empty()) return "";
       
       int maxi = 1;
       int start = 0;

       auto expand = [&](int l , int r){
          while(l >= 0 && r < n && s[r] == s[l]){
              if(r - l + 1 > maxi){
                 start = l;
                 maxi = r - l + 1;
              }
              l--;
              r++;
          }
       };
       for(int i = 0 ; i < n-1 ; i++){
          expand(i , i);
          expand(i , i+1);
       }
       return s.substr(start , maxi);
    }
};

