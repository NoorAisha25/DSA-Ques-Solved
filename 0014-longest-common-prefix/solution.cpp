class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
        if( s.empty()) return "";
        sort(s.begin() , s.end());
        string first = s.front();
        string last = s.back();
        string prefix = "";
        

        for(int i = 0 ; i < first.size() && i < last.size() ; i++){
            if(first[i] == last[i]){
                prefix.push_back(first[i]);
            }
            else break;
        } 

        return prefix;
    }
};
