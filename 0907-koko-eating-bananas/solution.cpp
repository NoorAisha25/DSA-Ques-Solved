class Solution {
public:
    long long solve (vector<int>& arr , int m){
        long long totalhrs = 0;

        for(int i = 0 ; i < arr.size() ; i++){
            totalhrs += ceil((double)arr[i] / (double)m);
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1;
        int r = *max_element(piles.begin() , piles.end());

        while(l <= r){
            int m = l + (r - l)/2;

            long long totalhrs = solve(piles , m);
            if(totalhrs <= h){
                r = m - 1;
            }
            else l = m  + 1;
        }
        return l;
    }
};
