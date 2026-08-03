class Solution {
public:
    int func(vector<int>&arr , int mid ){
        int days = 1;
        int cumSum = 0;
        for(int i = 0 ; i < arr.size() ; i++){
                cumSum += arr[i];
            if(cumSum > mid){
                days++;
                cumSum = arr[i];
            }
        }
        return days;
    }
    
    int shipWithinDays(vector<int>& arr, int days) {
       int n = arr.size();
       int l = *max_element(arr.begin() , arr.end());
       int h = accumulate(arr.begin() , arr.end(),0);
       int minCap = 1;

       while( l <= h){

        int mid = l + ( h - l)/2;
        int possAns = func(arr, mid );

        if(possAns <= days){
            minCap = mid;
            h = mid - 1;
        }
        else l = mid +  1;
       
       }
      return minCap;
    }
};
