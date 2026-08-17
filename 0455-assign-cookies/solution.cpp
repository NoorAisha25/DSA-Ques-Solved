class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m = g.size();
        int n = s.size();

        int i = 0;
        int j = 0;

        sort(s.begin()  ,s.end());
        sort(g.begin() , g.end());

        while( i < n && j < m ){
            if(s[i] >= g[j]){
                j++;
            }
            i++;
        }
        return j;
    }
};
