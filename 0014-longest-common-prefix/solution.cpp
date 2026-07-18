class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin() , strs.end());

       
        
        string first = strs.front();
        string last = strs.back();
        string prefix = "";
        
        for(int i=0 ; i<first.size() && i<last.size() ; i++){
        if(first[i] == last[i]) {
        prefix.push_back(first[i]);
        }
        else {
            break;
          }
        }

        return prefix;
    }
};
