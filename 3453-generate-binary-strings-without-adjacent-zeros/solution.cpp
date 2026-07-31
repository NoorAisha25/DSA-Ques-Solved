class Solution {
public:
        void helperfun(int i , string &s , vector<string>& ans){

            if(i >= s.size()){
                ans.push_back(s);
                return ;
            }
            
            
            
            helperfun(i+1 , s , ans);
            
            s[i] = '0';
            
            helperfun(i+2, s , ans);
            s[i] = '1';
        } 

    vector<string> validStrings(int n) {
         string s(n , '1');
  
        vector<string> ans;
        
        helperfun(0 , s , ans);
        
        return ans;
    }
};
