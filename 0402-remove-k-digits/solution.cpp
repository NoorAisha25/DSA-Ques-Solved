class Solution {
public:
    string removeKdigits(string num, int k) {
        string res = "";
        int n = num.size();

        for(int i = 0 ; i < n ; i++){
             while(!res.empty() && k > 0 && res.back() > num[i]){
                res.pop_back();
                k--;
             }

             if(!res.empty() || num[i] != '0'){
                res.push_back(num[i]);
             }
        }

        while(!res.empty() && k > 0){
            res.pop_back();
            k--;
        }

        if(res == "") return "0";

        return res; 
    }    
};
