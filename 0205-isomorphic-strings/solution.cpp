class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int first = s.length();
        int second = t.length();

        if(first != second) return false;

        vector<int> mapS(256,-1);
        vector<int> mapT(256,-1);

        for(int i=0 ; i<s.length() ; i++){
               char c1 = s[i];
               char c2 = t[i];

               if(mapS[c1] == -1 && mapT[c2] == -1){
                   mapS[c1] = c2;
                   mapT[c2] = c1;
               }

               else {

                if(mapS[c1] != c2 && mapT[c2] != c1){
                    return false;
                }
               }
        }
        return true;
    }
};
