class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int n = a.size();
        int m = b.size();
        int i = n-1;
        int j = m-1;
        int carry = 0;

        while(i >= 0 || j >= 0 || carry){
            int sum = carry;

            if(i >= 0) sum += a[i] - '0';
            if(j >= 0) sum += b[j] - '0';

            res.push_back(sum%2 + '0');
            carry = sum / 2;
            i--;
            j--;
        }
        reverse(res.begin() , res.end());
        return res;
    }
};
