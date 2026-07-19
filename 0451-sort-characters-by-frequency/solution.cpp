class Solution {
public:
    typedef pair<char,int> P;
    string frequencySort(string s) {
        
        vector<P> vec(123);

        for(char &ch : s){
            int freq = vec[ch].second;
            vec[ch] = {ch , freq+1};
        }

        auto lambda = [&](P &P1 , P &P2){
            return P1.second > P2.second;
        };

        sort(vec.begin() , vec.end() , lambda);

        string result = "";

        for(int i=0 ; i<=122 ; i++){

            char ch = vec[i].first;
            int freq = vec[i].second;
            string temp = string(freq , ch);
            result += temp;
        }
        return result;
    }
};
