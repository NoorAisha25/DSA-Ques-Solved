class Solution {
public:
    
    long long totalhrs(vector<int>&arr , int m){

        long long ans = 0;
        for(int i = 0 ; i < arr.size() ; i++){

            ans += ceil((double)arr[i] / (double)m);
        }

        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int p) {
       int n = piles.size();
       int l = 1;
       int h = *max_element(piles.begin() , piles.end());

       while(l <= h){
          int m = l + (h - l)/2;

          long long pos = totalhrs(piles , m);

          if(pos <= p) h = m - 1;
          else l = m  + 1;
       }

       return l;
    }
};
