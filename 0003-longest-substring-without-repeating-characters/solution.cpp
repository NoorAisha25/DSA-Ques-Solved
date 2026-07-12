class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> mpp(256 , -1);

        int n = s.size();
        int maxLen = 0;

        int l = 0 ; 
        int r = 0;

        while(r < n){

            if(mpp[s[r]] != -1){
                if(mpp[s[r]] >= l){
                    l = mpp[s[r]] + 1;
                }
            }
            mpp[s[r]] = r;
            maxLen = max( maxLen , r - l +1);
            
            r++;
        }
        return maxLen;
    }
};
