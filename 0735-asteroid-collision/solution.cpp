class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       vector<int>st;

       for(int &num : asteroids){
           while(!st.empty() && num < 0 && st.back() > 0){

              int sum = num + st.back();

              if(sum < 0) st.pop_back();
              else if(sum > 0) num = 0;
              else{
                 st.pop_back();
                 num = 0;
              }
           }

           if(num != 0){
            st.push_back(num);
           }
       }
       return st;
    }
};
