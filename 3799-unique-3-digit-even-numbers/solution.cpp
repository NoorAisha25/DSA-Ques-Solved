class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        sort(digits.begin() , digits.end());
        set<int>st;
        do{
            int res = digits[0] * 100 + digits[1]*10 + digits[2];
            if(digits[0] != 0 && res%2 == 0){
                st.insert(res);
            }
        }while(next_permutation(digits.begin() , digits.end()));

        return st.size();
    }
};
