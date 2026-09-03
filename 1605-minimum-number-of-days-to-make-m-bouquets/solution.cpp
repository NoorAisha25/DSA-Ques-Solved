class Solution {
public:
    int solve(vector<int>&arr , int mid , int k){
        int boq = 0;
        int curr = 0;

        for(int i = 0 ; i < arr.size() ; i++){
              if(arr[i] <= mid){
                curr++;
              }
              else{
                curr = 0;
              }
              if(curr == k){
                boq++;
                curr = 0;
              }
        }
        return boq;
    }
    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();
        int l = 1;
        int h = *max_element(arr.begin() , arr.end());
        int mini = -1;

        while(l <= h){
            int mid = l + (h  -  l)/2;

            int pos = solve(arr , mid , k);
            if(pos >= m){
                mini = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1 ;
            }
        }
        return mini;
    }
};
