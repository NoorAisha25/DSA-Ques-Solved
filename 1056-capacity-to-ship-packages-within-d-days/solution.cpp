class Solution {
public:

    int func(vector<int>& weights , int mid ){
        int days = 1;
        int load = 0;
        for(int w : weights){
             if(load + w > mid){
                days++;
                load=0;
             }
             load += w;
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin() , weights.end());
        int h = accumulate(weights.begin() , weights.end(),0);
        int minCap = 1;
        while( l <= h){

            int mid = l + (h-l)/2;

            int daysReq = func( weights , mid);
            if( daysReq <= days){
                minCap = mid ;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return minCap;
    }
};
