class Solution {
public:

    long long func(vector<int>&piles , int mid){
        long long totalHours = 0 ;
        for(int i=0 ; i< piles.size() ; i++){

            totalHours += ceil((double)piles[i] / (double)mid);

        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1; 
        int r = *max_element(begin(piles) , end(piles));

        while( l<= r){

            int mid = l + (r-l)/2;

            long long totalHours = func(piles, mid);
            if(totalHours <= h) r = mid - 1;
            else l = mid + 1;
        }
        return l;
    }
};
