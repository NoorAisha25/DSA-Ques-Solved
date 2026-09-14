class Solution {
public:
    typedef pair<char,int>P;
    string frequencySort(string s) {
        

        vector<pair<char,int>>vec(123);
        
        for(char c : s){
            int freq = vec[c].second;
            vec[c] = {c , freq+1};
        }

        sort(vec.begin() , vec.end() , [](P &P1 , P &P2){
            return P1.second > P2.second;
        });

        string res = "";

        for(int i = 0 ; i <= 122 ; i++){
            char c = vec[i].first;
            int freq = vec[i].second;
            string temp = string(freq , c);
            res += temp;
        }
        return res;
    }
};
