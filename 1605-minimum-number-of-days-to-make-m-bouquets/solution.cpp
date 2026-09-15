class Solution {
public:
    
    int solve(vector<int>&arr , int m , int k){
        int n = arr.size();
        int boqcnt = 0;
        int conscnt = 0;

        for(int i = 0 ; i < n ; i++){

            if(arr[i] <= m) conscnt++;
            else conscnt = 0;
            if(conscnt == k){
                boqcnt++;
                conscnt = 0;
            }
        }
        return boqcnt;
    }
    int minDays(vector<int>& arr, int m, int k) {
       int n = arr.size();
       int l = 1;
       int h = *max_element(arr.begin() , arr.end());
       int mini = -1;

       while(l <= h){
          int mid = l + (h - l)/2;

          int pos = solve(arr , mid , k);

          if(pos >= m){
            mini = mid;
            h = mid - 1;
          }
          else l = mid + 1;
       }
       return mini;
    }
};
