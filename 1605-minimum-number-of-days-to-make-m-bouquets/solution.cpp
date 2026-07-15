class Solution {
public:

    int func(vector<int>& bloomDay, int mid , int k){
        int bouqecnt = 0;
        int consecutive_cnt = 0;
        
        for(int i=0 ; i< bloomDay.size() ; i++){

            if(bloomDay[i] <= mid) {
                consecutive_cnt++;
            }
            else{
                consecutive_cnt = 0;
            }
            if(consecutive_cnt == k){
                bouqecnt++;
                consecutive_cnt = 0;
            }
        }
        
        return bouqecnt;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l = 1 ;
        int h = *max_element(bloomDay.begin() , bloomDay.end());
        int result = -1;
        while(l<= h){

            int mid = l + (h-l)/2;

            int MakeBouquets = func(bloomDay , mid , k);

            if(MakeBouquets >= m) {
                result = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return result;
    }
};
