class Solution {
public:
    string removeKdigits(string num, int k) {
        string res = "";

        int n = num.size();

        for(int i = 0 ; i<n ; i++){  // for loop chalao string par jo input de rakha hai
           while(res.length() >0 && k>0 && res.back() > num[i]){ // res m hamein pop karna hai tab jab res khali na ho + k zero k barabar na ho  + res m jo element hai woh input k element se barabar hai
              res.pop_back();
              k--;
           }
           //push tab karna hai jab res m element mojood hai ya phit element hamara 0 se nhi shuru ho raha hai
           if(res.length() > 0 || num[i] != '0'){
             res.push_back(num[i]);
           }
        }
            // ye us condition k liye hai jaise input = 12345 isme saare prev ele successor se chote hain th yahan bas k-- jab tak k zero k barabar na ho jaye
            while(k > 0 && res.length() > 0 ){
                res.pop_back();
                k--;
            }
             // agar end m result empty hai toh 0 return kar do
            if(res == "") return "0";
            //warna res jo aaya hai woh return kar do
            return res;
    }    
};
