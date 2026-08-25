class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        string res = "";
        int len = 0;

        for(int i = 0 ; i < n-2 ; i++){
             if((num[i] - '0') == (num[i+1] - '0') && (num[i+1] - '0')== (num[i+2] - '0')){
                string temp = num.substr(i , 3);
                if(temp > res){
                    res = temp;
                }
             }
        }

        return res;
    }
};
