class Solution {
public:
    
    int solve(vector<int>& arr , int m , int d){
        int cum = 0;
        int cnt = 1;

        for(int i = 0 ; i < arr.size() ; i++){
            cum += arr[i];

            if(cum > m){
                cnt++;
                cum = arr[i];
            }
        }
        return cnt;
    }
    int shipWithinDays(vector<int>& arr, int days) {
       int n = arr.size();
       int l = *max_element(arr.begin() ,arr.end());
       int h = accumulate(arr.begin() , arr.end() , 0);
       int mini = 1;

       while(l <= h){
         int m = l + (h - l)/2;
         int pos = solve(arr , m , days);

         if(pos <= days){
            mini = m;
            h = m - 1;
         }
         else l = m  + 1;
       }
       return mini;
    }
};
